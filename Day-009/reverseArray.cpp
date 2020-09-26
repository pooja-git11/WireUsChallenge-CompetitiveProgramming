#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& v, int n)
{
    if(n == 0)
        return;

    int temp = v[n - 1];
    v.pop_back();

    reverse(v, n - 1);

    v.insert(v.begin(), temp);
}

int main()
{
    int n;
    cout << "Enter Size ";
    cin >> n;

    cout << "Enter element ";
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v, n);

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
}
