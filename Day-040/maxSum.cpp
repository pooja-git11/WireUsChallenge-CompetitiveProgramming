/**
    problem statement: Let's consider a triangle of numbers in which a number appears in the first line , two numbers apperar in the second line, three in the third line,
    etc. Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that on each path
    the next number is located on the row below, more precisely either directly below or below and one place to the right

    input :n =  4
           1
           1 2
           4 1 2
           2 3 1 1
	output: 9 (1+1+4+3)
*/
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int t[101][101];

int maxSum(int i , int j, vector<vector<int>> v)
{
	if(i == v.size() || j == v.size())
		return 0;

	if(t[i][j] != -1)
		return t[i][j];
	return t[i][j] = v[i][j] + max(maxSum(i + 1, j + 1, v), maxSum(i + 1, j, v));
}

int main()
{
    int k;
    cin >> k;

    while(k--)
    {
		int n;
		cin >> n;

		vector<vector<int>> vec;

		for(int i = 0; i < n; i++)
		{
			vector<int> v(i + 1);
			for(int j = 0; j < i + 1; j++)
				cin >> v[j];
			vec.push_back(v);

		}

        memset(t, -1, sizeof(t));
		cout << "max sum is " << maxSum(0, 0, vec);

    }
}
