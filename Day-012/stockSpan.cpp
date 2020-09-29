/*
    Stock Span problem is a financial problem where we have a series of N daily price quotes for a stock and we need to calculate span of stocks price for all N days
    you are given an array of length N, where ith element of array denotes the price of a stock on ith. Find the span of stock's price on a given day i, is the maximum
    nuber of concecutive days before the (i + 1)th day for which stock's price on these days is less than or equal to that on the ith day.

    input : 5
    arr[] : 30 35 40 38 35
    output 1 2 3 1 1
*/

#include<iostream>
#include<vector>
using namespace std;

void stockSpan(int *arr, int n)
{
    vector<int> days(n, 1);
    for(int i = 1; i < n; i++)
    {
      if(arr[i] > arr[i -1])
            days[i] = days[i - 1] + 1;

    }

    for(int i = 0; i < n; i++)
        cout << days[i] << " ";
    cout << " END";
}

int main()
{
    int n;
    cout << "Days ";
    cin >> n;

    int *arr = new int [n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    stockSpan(arr, n);
}
