/*
    Day 3
    Find largest Area enclosed by a bar
    input : arr[] : {1,4,3,7,1,3,6]
    output : 9(largest rectangular area)
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
            if(arr[j] >= arr[i])   //traverse in left, till you find bar whose height is greater than or equal to current bar
                left_index = j;
            else                 //break when you find smaller length bar
                break;
        }

        right_index = i;
        for(int j = i + 1; i < n; j++)
        {
            if(arr[j] >= arr[i])        // traverse in right ,till you find bar whose height is greater than or equal to current bar
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
