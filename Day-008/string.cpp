/*
    input
    4
    string[] s1 ={ab, bc, def, ab}
    2
    string[] s2 ={ab,bc}
    output : occurance of each string s2 in s1
             2
             1

*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>& checkForOccurance(vector<string>& ip, vector<string>& str)
{
    unordered_map<string, int> mp;
    vector<int> res;

    for(int i = 0; i < ip.size(); i++)
        mp[ip[i]]++;

   for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
       cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }


   for(int i = 0; i < str.size(); i++)
    {
        for(auto itr = mp.begin(); itr != mp.end(); ++itr)
        {

            if(!(str[i].compare(itr -> first)))
            {
                res.push_back(itr -> second);
                break;
            }
        }

    }

    return res;

}

int main()
{
    int n, m;

    cout << "Enter no. of input string ";
    cin >> n;

    vector<string>ip(n);
    cout << "Enter String ";
    for(int i = 0; i < n; i++)
         cin >> ip[i];

    cout << "Enter no. of ouput string  ";
    cin >> m;
    vector<string>str(m);
    for(int i = 0; i < m; i++)
        cin >> str[i];

    vector<int> res = checkForOccurance(ip, str);

    for(int i = 0; i < res.size(); i++)
        cout << res[i];
}
