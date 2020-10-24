/**
    problem statement: Kumar has to give one coin to each of his two children. he wants the absolute value of the difference between the values of coins given to the two
    children to be as small as possible.
    input : 2
            1 4 3
    output  1(4 - 3 = 1)
*/
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int minDiff(int *arr, int n)
{
    sort(arr, arr + n);

    int min = INT_MAX;
    for(int i = 1; i < n; i++)
    {
        int curr_diff = arr[i] - arr[i - 1];
        if(min > curr_diff)
            min = curr_diff;
    }
    return min;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        cout << minDiff(arr, n);
    }
}
