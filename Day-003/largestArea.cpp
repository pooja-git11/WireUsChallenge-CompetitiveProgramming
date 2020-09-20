/*
    Day 3
    Find largest Area enclosed by a bar
*/

#include<iostream>
#include<climits>
using namespace std;

int maxArea(int *arr, int n)
{
    int left_index, right_index, curr_area, area = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        left_index = i;
        for(int j = i - 1; j >= 0; j--)
        {
            if(arr[j] >= arr[i])
                left_index = j;
            else
                break;
        }

        right_index = i;
        for(int j = i + 1; i < n; j++)
        {
            if(arr[j] >= arr[i])
                right_index = j;
            else
                break;
        }

        curr_area = (right_index - left_index + 1) * arr[i];
        area = max(curr_area, area);
    }
    return area;
}
int main()
{
    int n;
    cout << "No. of bar ? ";
    cin >> n;

    cout << "Enter length of each bar ";
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxArea(arr, n);
}
