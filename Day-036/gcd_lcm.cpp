/**
    problem statement: Two integer a and b ate the input . Writes a program to find gcd and lcm of a number.
*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int num1, num2;
        cout << "Enter number ";
        cin >> num1 >> num2;

        if(num2 > num1)
        {
            int temp = num2;
            num2 = num1;
            num1 = temp;
        }
        int gcd_no = gcd(num1, num2);
        int lcm = (num1 * num2 ) / gcd_no;

        cout << gcd_no << " " << lcm << endl;
    }
}

