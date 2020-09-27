// rotate arrray to left , here using juggling algo

#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        gcd(b, a % b);
}

void rotateLeft(int *arr, int n, int d)
{
    int temp, j, k;
    for(int i = 0; i < gcd(d, n); i++)
    {
        j = i;
        temp = arr[i];
        while(1)
        {
            k = j + d;
            if(k >= n)
                k = k - n;
            if(k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

int main()
{
    int n, d;
    cout << "Size ? ";
    cin >> n;

    int *arr = new int [n];
    for(int i = 0; i < n; i++)
      cin >> i[arr];

    cout << "No of rotation : ";
    cin >> d;

    rotateLeft(arr, n, d);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


