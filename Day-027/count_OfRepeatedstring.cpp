/**
    problem statement: count the number of repetition of strings input
    input : abcd doc cse doc abcd abcd
    output: abcd 3 cse 1 doc 1
*/
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

bool cmp(pair<string,int> a, pair<string,int> b)
{
    return a.first < b.first;
}

void repeatString(string *str, int n)
{
    unordered_map<string, int> map;

    for(int i = 0; i < n; i++)
            map[str[i]]++;

    vector<pair<string,int>> v;
    for(auto &it :map)
        v.push_back(it);


    sort(v.begin(),v.end(), cmp);

    for(auto itr = v.begin(); itr != v.end(); itr++)
        cout << itr -> first << " " << itr -> second << endl;
}

int main()
{
    int n;
    cout << "Enter size ?";
    cin >> n;
    string str[n];

   for(int i = 0; i < n; i++)
        cin >> str[i];
    repeatString(str, n);
}
