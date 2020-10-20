/**
    problem statement: prepare a list of students with their first names such taht if the are repeated then only the student last name will be mentioned in the list.
    input: no of student = 3
           firstName LastName
            Priya     raval
            Niket     aman
             Priya     kumari

    output: Priya raval
            Niket
            Priya kumari
*/
#include<iostream>
#include<unordered_map>
using namespace std;
const int N = 2;

void printNames(string arr[][N], int rows)
{
    unordered_map <string, int> map;

   for(int i = 0; i < rows; i++)
        map[arr[i][0]]++;

    for(int i = 0; i < rows; i++)
    {
        cout << arr[i][0] << " ";
        for(auto itr = map.begin(); itr != map.end(); itr++)
        {
            if(itr->first == arr[i][0] && itr->second > 1)
            {
                cout << arr[i][1];
                break;
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no of student ";
    cin >> n;

    cout << "Enter their First Name and Last Name respectively ";
    string arr[n][N];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
            cin >> arr[i][j];

    }

    printNames(arr, n);
}
