/**
    problem statement: Calculate and print the sum of the elements in an array , integer may be quite large
*/
#include <iostream>
using namespace std;

int sum(unsigned long long int *arr, int n)
{
    unsigned long long int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n;
    cout << "Size ? ";
    cin >> n;

    unsigned long long int arr[n];


    cout << "Enter array element ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sum(arr, n);
}
