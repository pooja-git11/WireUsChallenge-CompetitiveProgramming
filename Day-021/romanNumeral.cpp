#include<iostream>
using namespace std;

int convertToInteger(string s)
{
    int i = 0, num = 0;
    while(i < s.size())
    {
        if(s[i] == 'I' && s[i + 1] == 'V')
        {
            num = num + 4;
            i++;
        }
        else if(s[i] == 'I' && s[i + 1] == 'X')
        {
            num = num + 9;
            i++;
        }
        else if(s[i] == 'I')
            num += 1;
        else if(s[i] == 'V')
            num += 5;
        else if(s[i] == 'X' && s[i + 1] == 'L')
        {
           num += 40;
           i++;
        }
        else if(s[i] == 'X' && s[i + 1] == 'C')
        {
           num += 90;
           i++;
        }
        else if(s[i] == 'X')
            num += 10;
        else if(s[i] == 'L')
            num += 50;
        else if(s[i] == 'C' && s[i + 1] == 'D')
        {
           num += 400;
           i++;
        }
        else if(s[i] == 'C' && s[i + 1] == 'M')
        {
           num += 900;
           i++;
        }
        else if(s[i] == 'C')
            num += 100;
        else if(s[i] ==  'D')
            num += 500;
        else if(s[i] ==  'M')
            num += 1000;

        i++;


    }
    return num;
}

int main()
{
    string s;
    cout << "Enter Roman numerals ";
    cin >> s;

    cout << convertToInteger(s);
}
