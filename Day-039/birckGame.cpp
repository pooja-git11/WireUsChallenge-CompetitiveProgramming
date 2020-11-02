/**
	Problem Statement: The Citizens of " CodingLand" regularlry play a game. Thet have brickseach denoting some integer from 0 t 9. These are arranged together in random
	manner without seeing to form different numbers keeping in mind that the first brick is never a 0. You need to Check For Palindrome
*/

#include<iostream>
using namespace std;

bool isPalindrome(string n)
{
		int start = 0, end = n.size() - 1;

		while(start < end)
		{
			if(n[start] != n[end])
				return false;
			start++;
			end--;
		}

		return true;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string n;
		cout << "Enter Number ";
		cin >> n;

        isPalindrome(n) ? cout << "wins\n" : cout <<  "loses\n";
	}
}
