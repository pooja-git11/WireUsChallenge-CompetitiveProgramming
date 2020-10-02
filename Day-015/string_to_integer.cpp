/**
    Write a recursive function to convert the number in string form to number in integer form
*/

#include<iostream>
using namespace std;

void convert(string nums, int& num)
{
    if(nums.empty())
        return;

    char c = nums[nums.size() - 1];
    nums.pop_back();

    convert(nums, num);

    int n = c - '0';
    num = num * 10 + n;
}

int main()
{
    string nums;
    int num = 0;
    cout << "Enter String of numbers ";
    cin >> nums;

    convert(nums, num);
    cout << num;
    cout << typeid(num).name();
}
