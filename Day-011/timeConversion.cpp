/*
    convert time from 12 hour to 24 hour format
    Midnight is 12:00:00 AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon is 12:00:00 PM on 12-hour clock and 12:00:00 on 24-hour clock
*/
#include<iostream>
using namespace std;

void convertIn24(string s)
{
    int h1 = s[0] - '0';   //convert string into integer
    int h2 = s[1] - '0';

    int hh = h1 * 10 + h2 % 10;

    if(s[8] == 'A')
        hh == 12 ? cout << "00" : cout << hh;
    else
    {
        hh = hh + 12;
        cout << hh;
    }


    for(int i = 2; i < 8; i++)
                cout << s[i];
}

int main()
{
    string s;
    cout << "Enter Time (in hh:mm:ssAM/PM) format ";
    cin >> s;

    convertIn24(s);
}
