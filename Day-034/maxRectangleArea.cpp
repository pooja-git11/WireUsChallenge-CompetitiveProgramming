/**
    problem statement: you will be given a set of N sticks out of which you need to select 4 such sticks that will form a rectangle of the maximum area possible out of
    the provide sticks.
    input : n = 5
            1 2 3 1 2

    output : 2
*/
#include<iostream>
#include<algorithm>
using namespace std;

int maxArea(int *arr, int n)
{
    if(n < 4)
        return -1;
    sort(arr, arr + n);

    int count = 0;
    int area = 1;
    for(int i = n - 1; i >= 0 && count < 2; i--)
    {
        if(arr[i] == arr[i - 1])
        {
            area *= arr[i--];
            count++;
        }
    }
    return count == 2 ? area : -1;

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cout << "Enter no of sticks ";
        cin >> n;

        int *arr = new int [n];
        cout << "Enter lenght of each stick ";
        for(int i = 0; i < n; i++)
             cin >> i[arr];

        cout << "Max Area = " << maxArea(arr, n) << endl;
    }
}
