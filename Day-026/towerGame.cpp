/**
    problem statement : You will be provide a tower with n chips . perform two queries on tower
    1. insert L chips to the top of tower
    2. remove R chips from top of tower
    important : due to gravity tower will have to fall right so you need to keep removing the repeated number of chips from the tower(i.e no duplicate chips allowed)

    input: N(chips available on tower) = 5 , Q(queries) = 3
           N chips = 1 2 3 4 5
           Q queries, 1 3(L) = 6 7 8, chips on tower = 1 2 3 4 5 6 7 8
                      2 3(R) , after removing 2 chips , chips on tower = 1 2 3 4 5
                      3 2(L) = 0 8, chips on tower = 1 2 3 4 5 0 8
    output : 8 0 5 4 3 2 1(from top to  bottom)
*/
#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;


void insert (stack<int> &s, int n, unordered_map<int, int> &mp)
{
     cout << "Enter chips ";
     while(n--)
     {
        int x;
        cin >> x;

        if(mp[x] < 1)
        {
            mp[x]++;
            s.push(x);
        }

     }

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int N, Q;
        stack<int> s;
        unordered_map <int, int> mp; // keep count of chips on stack

        cout << "\nEnter Number of chips available on tower ";
        cin >> N;
        cout << "Enter number of queries ";
        cin >> Q;

        insert(s, N, mp);

        cout << "1. Insert chips ";
        cout << "\n2. Remove chips ";

        while(Q--)
        {
            int ch;
            cout << "\nEnter choice ";
            cin >> ch;

            if(ch == 1)
            {
                int L;
                cout << "Enter number of  chips want to insert ";
                cin >> L;
                insert(s, L, mp);
            }
            else if(ch == 2)
            {
                int R;
                cout << "Enter chips want to remove ";
                cin >> R;
                while(R-- && !s.empty())
                {
                    mp[s.top()]--;
                    s.pop();
                }
            }
        }

        while(!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }

    }
}
