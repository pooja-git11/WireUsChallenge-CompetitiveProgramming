/**
    problem statement: Given a number x, you need to make it divisible by 10 given that for a single operation you can only multiply x by 2. print no. of operaion
    required to make it divisible by 10.
    input 25
    output 1

*/
#include<iostream>
using namespace std;

int checkForDivisibility(int x)
{
    int r = x % 10;
    if(r == 5)
        return 1;
    else if(r == 0)
        return 0;
    else
        return -1;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;

        cout << "Enter number ";
        cin >> x;
        cout << checkForDivisibility(x)
            << endl;
    }
}
