/*
    input: Sting s = IAmACompetitiveProgrammer
    output : I
            Am
            A
            Competitive
            Programmer
*/

#include<iostream>
using namespace std;

void decipher(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        isupper(s[i]) ? cout << "\n" << s[i] : cout << s[i];
        i++;
    }

}
int main()
{
    string s;

    cout << "Enter String : ";
    cin >> s;

    decipher(s);
}
