/*
    given a string and you have to remove it's duplicate consecutive characters.
    input : string s = hello
    output  hel*o
*/

#include<iostream>
using namespace std;

string res;

string rec(string s, int n)
{
    if(n == 1)
        return s[0];

    if(s[n - 1] = rec(s, n - 1) )
        res += '*' ;
    else
       res += s[n - 1];

}
int main()
{
    string s;
    cout << "Enter string  ";
    cin >> s;

    cout << rec(s,s.length());
}
