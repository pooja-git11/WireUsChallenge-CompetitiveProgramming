//Reverse stack using recursion

#include <iostream>
#include <stack>
using namespace std;

void insert(stack <int> &s, int temp)
{
    if(s.empty())
    {
        s.push(temp);
        return;
    }
    int t = s.top();
    s.pop();
    insert(s, temp);
    s.push(t);

}

void reverse(stack <int> &s)
{
    if(s.size() == 1)
    {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);

    insert(s, temp);
}

int main()
{
    stack <int> s;
    int x;
    char y;

    cout << "Enter stack element ";
    do
    {
        cin >> x;
        s.push(x);
        cout << "Want to enter more (y)";
        cin >> y;
    }while(y == 'y');

    reverse(s);

    while(! s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

}
