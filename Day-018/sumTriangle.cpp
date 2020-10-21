/**
    Given an array of intergers, print a sum triangle from it.
    input: A = [1, 2, 3. 4, 5]
    output:         [48]
                  [20, 28]
                 [8, 12, 16]
                [3, 5, 7, 9]
              [1, 2, 3, 4, 5]
*/
#include <iostream>
#include <vector>
using namespace std;

void printSumTriangle(vector<int> v)
{
    vector <vector <int>> vt;
    vt.push_back(v);

    for(int i = 0; i < v.size() - 1; i++)
    {
        vector<int> temp;
        for(int j = 0; j < vt[i].size() - 1; j++)
        {
            temp.push_back(vt[i][j] + vt[i][j + 1]);
        }
        vt.push_back(temp);
    }

    for(int i = vt.size() - 1; i >= 0; i--)      // traversing vector in reverse direction
    {
        for(int k = v.size() - vt[i].size(); k >= 0 ; k--)  // for space
            cout << " ";
        for(int j = 0; j < vt[i].size(); j++)    // for triangle
            cout << vt[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size ? ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter Array : ";
    for(int i = 0; i < n; i++)
        cin >> v[i];

    printSumTriangle(v);
}
