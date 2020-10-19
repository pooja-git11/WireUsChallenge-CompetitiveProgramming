/**
    problem statement : Return the index of first occurance of string B in string A.
    input : string, A = "hello"
            string, B = "ll"
    output: 2
    explaination first occurance of ll in A is 2.

    constraints: A and B consist only of lowercase English character
*/

#include<iostream>
using namespace std;

int firstOccur(string a, string b)
{
    int i = 0,j = 0;

    while(i < a.size())
    {
        if(a[i] == b[j])
        {
            int ind = i;
            while(a[i] == b[j] && j < b.size())
            {
                i++;
                j++;
            }
            if(j == b.size())
                return ind;
            else
                j = 0;
        }
        i++;
    }

    return -1;
}

int main()
{
    string A, B;
    cout << "Enter A ";
    cin >> A;

    cout << "Enter B ";
    cin >> B;

    if(B.size() == 0)
        cout << "0";
    else if(B.size() > A.size())
        cout << "-1";
    else
        cout << firstOccur(A, B);
}


