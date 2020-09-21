/*
    problem statement : insert ascii difference of character
    input : string s = abc
    output a2b-1c
*/

#include<iostream>
using namespace std;

string insertAscii(string s)
{
    string res;
    int l = s.length();

    for(int i = 0; i < l - 1; i++)
    {
        res.push_back(s[i]);
        int diff = s[i + 1] - s[i];
        res +=  to_string(diff);
    }
    res.push_back(s[l - 1]);

    return res;
}

int main()
{
    string s;

    cout << "Enter String ";
    cin >> s;

    cout << insertAscii(s);
}
