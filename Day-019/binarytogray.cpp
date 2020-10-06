/**
    convert binary to Gray code
    binary = 1001
    gray =   1001
*/
#include<iostream>
#include<cstring>
using namespace std;

string convertToGray(string s)
{
    string res;
    res = s[0];

    for(int i = 1; i < s.size(); i++)
    {
        int a = s[i] - '0';
        int b = s[i - 1] - '0';
        a = a ^ b;
        string temp = to_string(a);
        res += temp;
    }
    return res;
}

int main()
{
    string s;
    cout << "Enter binary no  ";
    cin >> s;

    cout << "\nGray code is " << convertToGray(s);
}
