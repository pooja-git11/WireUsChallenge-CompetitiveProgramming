/**
    problem statement: remove the duplicates from a given sorted array and print it in order.
    input: n = 3
           arr[] = [1,1,2]
    output: arr[] = [1, 2]
*/
#include <iostream>
#include<vector>
using namespace std;

void removeDuplicate(vector <int> v)
{

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] == v[i - 1])
         {
            int j = i;
            v.erase(v.begin() + i);
            i = j - 1;
        }
    }

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

int main()
{
    int t;
    cout << "TestCases ? ";
    cin >> t;

    while(t--)
    {
        int n;
        cout << "Enter size? ";
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i ++)
            cin >> v[i];
        removeDuplicate(v);
        cout << endl;
    }
}
