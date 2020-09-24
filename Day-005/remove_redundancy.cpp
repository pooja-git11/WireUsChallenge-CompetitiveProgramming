/*
    given a string and you have to remove it's duplicate consecutive characters.
    input : string s = hello
    output  hel*o
*/

#include<iostream>
using namespace std;

int main()
{
    string s, res;
    cout << "Enter string  ";
    cin >> s;

    res = s[0];
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] ==  s[i - 1])
            res += '*';
        else
            res.push_back(s[i]);
    }
    cout << res;
}
