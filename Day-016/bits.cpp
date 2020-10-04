/**
    Given a number n, finad all binary sequence of length 2n such that sum of first n bits is same as sum of last n bits.
    input : n = 2
    output:  0101, 1111,1001,0110,0000,1010
*/

#include<iostream>
#include<vector>
using namespace std;

void solve(int n, string op, vector<string>& v)
{
    if(n == 0)
    {

        int n1 = op[0] - '0';
        int n2 = op[1] - '0';
        int n3 = op[2] - '0';
        int n4 = op[3] - '0';

        if(n1 + n2 == n3 + n4)
         {
             v.push_back(op);
         }
         return;
    }
    string op1 = op;
    string op2 = op;

    op1.push_back('1');
    op2.push_back('0');


    solve(n - 1, op1, v);
    solve(n - 1, op2, v);

}

int main()
{
    int n;
    vector<string> v;
    string op;

    cout << "Enter Bits";
    cin >> n;


    solve(2 * n, op, v);

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
