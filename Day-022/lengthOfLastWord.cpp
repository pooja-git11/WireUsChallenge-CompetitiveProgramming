/**
    Find length of last word in a given string
    input : string ,s = "Hello, World"
    output: 5(length of last word World is 5)
*/
#include<iostream>
using namespace std;

int lenOfLastWord(string str)
{
    int l = str.size();

    while(str[--l] != ' ');     //start traversing the string form last until whitespace encounter

   return str.size() - l - 1;

}

int main()
{
    string str;
    cout << "Enter the string ";
    getline(cin, str);

    cout << "Length of last word " << lenOfLastWord(str);
}
