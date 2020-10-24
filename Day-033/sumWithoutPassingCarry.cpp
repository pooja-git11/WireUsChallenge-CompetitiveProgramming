/**
    problem statement: Given two numbers a and b , sum these two number buy doesn't carry forward.
    input : a = 12 , b = 9
    output: 11
*/
#include<iostream>
#include<string>
using namespace std;

string sum(string  a , string b)
{
    int num1 = a.length();
    int num2 = b.length();

    if(num1 > num2)
    {
        int diff = num1 - num2;
        while(diff--)
            b.insert(0, "0");
    }
    else if (num2 > num1)
    {
        int diff = num2 - num1;
        while(diff--)
            a.insert(0, "0");
    }

    string res;
    for(int i = 0; i < a.length(); i++)
    {
        int r1 = a[i] - '0';
        int r2 = b[i] - '0';
        r1 = (r1 + r2 )% 10;
        res += to_string(r1);
    }

    return res;
}

int main()
{
   int t;
   cin >> t;

   while(t--)
   {
        string a, b;
        cin >> a >> b;

        cout << sum(a, b) << endl;;
   }
}
