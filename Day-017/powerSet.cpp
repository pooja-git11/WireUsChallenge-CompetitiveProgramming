/**
    you have to generate a power set in lexographically order.
    input : abc
    output : a ab abc ac b bc c

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(string ip, string op, vector<string>& res)
{
    if(ip.empty())
    {
        res.push_back(op);
        return;
    }

    string op1  = op;
    string op2 = op;

    op1.push_back(ip[0]);
    ip.erase(ip.begin());
    solve(ip, op1, res);
    solve(ip, op2, res);
}

int main()
{
    string ip, op;
    cout << "Enter String ";
    cin >> ip;

    vector<string> res;
    solve(ip, op, res);

    sort(res.begin(), res.end());

    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}
