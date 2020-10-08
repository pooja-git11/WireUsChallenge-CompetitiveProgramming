/**
    Given a number n, our task is to find all 1 to n bit numbers with no consecutive 1s in their binary representation
    input : n = 4
    output: 1 2 4 5 8 9 10(binary 1 , 10, 100, 101, 1000, 1001,1010)
*/
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

void Consecutive1(string s, vector <int>& res)
{
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == '1' && s[i - 1] == '1')
            return;

    }
    int sum = 0;
    int n;
    int j = 0;

    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == '1')
            n = 1;
        else
            n = 0;
        sum = sum + pow(2, j) * n;
        j++;
    }
    res.push_back(sum);

}

void solve(int n, vector <int>& res)
{
    queue<string> q;
    q.push("1");

    for(int i = 1; i < pow(2, n); i++)
    {
        string s1 = q.front();
        q.pop();

        Consecutive1(s1, res);

        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> res;
    solve(n, res);

    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}
