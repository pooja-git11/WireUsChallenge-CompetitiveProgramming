/**
    Tower of Hanoi
    rod1 = S
    rod2 = H
    rod3 = D
*/
#include<iostream>
using namespace std;

void solve(int n, char S, char D, char H)
{
    if(n == 1)
    {
        cout << "Move " << n << " from " << S << " to " <<  D << endl;
        return;
    }

    //hypothesis
    solve(n - 1, S, H, D);

    //Induction
    cout << "Move " << n << " from " << S << " to " << D << endl;

    solve(n - 1, H, D, S);
}

int main()
{
    int n;
    cout << "Enter no of disk ";
    cin >> n;

    char S = 'S';
    char D = 'D';
    char H = 'H';
    solve(n, S, D , H);
}
