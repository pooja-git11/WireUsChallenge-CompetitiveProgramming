/**
    problem statement: Keith calculate the aritmetic average of m + p numbers, let's denote average by w. Jones being jealous of the fact that keith had finished his assignment
    secretly took the p numbers but with the same value out of the sequence . keiht stll knows the remaining m elements .now help him with restoring the original sequence by
    finding the value of the deleted elements or deciding that there is some mistake and the described scenario is impossible . Note that if it is possible for the deleted
    elements to have the same value, then it can be unique. Also note that this value must be a positive integer . otherwise print -1

    input: m = 3, p = 3, w = 4
           a[m] = {3, 3, 4}
    output: 4
    Explaination : (a[0] + a[1] +....+a[m - 1] + missing_number * p)/ (m + p)   = w(average)

*/
#include<iostream>
using namespace std;

void missingNumber(int m, int p, int w, int *arr)
{
    int sum = 0, miss_no, r;
    for(int i = 0; i < m; i++)
        sum += arr[i];

    miss_no = (w * (m + p)) - sum;
    r = miss_no % p;
    if(r == 0 && miss_no > 0)
        cout << miss_no / p;
    else
        cout << "-1";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m, p, w;
        cout << "Enter m = ";
        cin >> m;

        cout << "Enter p = ";
        cin >> p;

        cout << "Enter w= ";
        cin >> w;

        int *arr = new int [m];
        cout << "Enter m numbers ";
        for(int i = 0; i < m; i++)
            cin >> arr[i];

        missingNumber(m, p, w, arr);
        cout << endl;
    }

}
