/**
	Given N integers you need to print the number of integers that are divisible by K.
	input : N = 3 K = 5
			5, 10, 15
	output : 2
*/

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	int n, k;
	cout << "Enter N and K respectively ";
	cin >> n;
	cin >> k;

	int second = 0;
	int i = 0, count = 0;
	int *arr = new int [n];
	for(int j = 0; j < n; j++)
		cin >> arr[j];

	while(true)
	{
		sleep(1);
		second++;

		if(arr[i++] % k == 0 && i < n)
			count++;
        if(second == 8)
			break;
	}
	cout << count;

}
