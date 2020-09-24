/*
    given a string and you have to compress that string.
    input : string s = aaabbccde
    output  a3b2c2de
*/

#include<iostream>
using namespace std;

int main()
{
    string s, res;
    cout << "Enter string  ";
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        res.push_back(s[i]);
        int count = 1;
        while(s[i] == s[i + 1])
        {
            count++;
            i++;
        }
        if(count > 1)
            res += to_string(count);

    }
    cout << res;
}
