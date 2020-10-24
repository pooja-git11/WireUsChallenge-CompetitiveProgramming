/**
    problem statement: louis has lots of books ,he wants to pile up the books that still have some remaining exercise into a single pile . he willl grab the books one by
    one and add the books that still have remaining exercise to the top of the pile. Whenevere he want to do book exercise he will pick the book with the minimum no of remaining
    exrecise from the pile , and after doing all the remaining exercise he will trash the book. in order to pick the book he has to remove the all the books above it .
    so print the no of book he remove also the name of book which  he is going to do the exercise.
*/
#include<iostream>
#include<vector>
using namespace std;

void remove_book(vector<pair<int, string>> &vec)
{
    int min = vec[0].first;
    int loc = 0;
    string book = vec[0].second;
    for(int i = 1; i < vec.size(); i++)
    {
        if(min > vec[i].first)
        {
            min = vec[i].first;
            loc = i;
            book = vec[i].second;
        }
    }
    cout << vec.size() - 1 - loc;
    cout <<" " << book;
    vec.erase(vec.begin() + loc);
}

int main()
{
    int n;
    cout << "Enter No. of action you want to perform ? ";
    cin >> n;

    vector <pair <int, string>> vec;

    while(n--)
    {
        int task;
        string book_name;
        cin >> task;

        if(task == -1)
            remove_book(vec);
        else{
            cin >> book_name;
            vec.push_back(make_pair(task, book_name));
        }
    }
}
