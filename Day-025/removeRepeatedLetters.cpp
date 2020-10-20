/**
    problem statement: From a set of strings input you have to remove the repeated letters for every string and print them in order
    input : string[] : {"abbcccppf", "avaabccba", "ccbaafddhll"}
    output: string[]: {"abcpf", "avbc", "cbafdhl"}
*/
#include<iostream>
using namespace std;

void removeRepeatedLetter(string *arr, int n)
{
    int k;
    for(int i = 0; i < n; i++)
    {
        string s = arr[i];
        string temp = "";
        for(int j = 0; j < s.length(); j++)
        {
            for(k = 0; k < temp.length(); k++)
            {
                if(s[j] == temp[k])
                    break;
            }
            if(k == temp.length())
                temp += s[j];
            arr[i] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter no of string ";
    cin >> n;

    string arr[n];
    cout << "Enter String ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    removeRepeatedLetter(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
