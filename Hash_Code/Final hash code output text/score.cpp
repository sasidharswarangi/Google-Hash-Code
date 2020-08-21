#include<bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    int n,i,j;
    int lib,days;
    cin>>n>>lib>>days;
    int arr[n];
    fast;
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    int stats[lib],perday[lib];
    vector<vector<int>> data;
    for(i=0;i<lib;i++)
    {
        vector<int> vect;
        int temp;
        cin>>stats[i]>>perday[i];
        for(j=0;j<stats[j];j++)
        {
            cin>>temp;
            vect.push_back(temp);
        }
        data.push_back(vect);
    }
    //end of data input;


    //start of score calc;
    int day=0;
    long long score=0;
    int numb_libs;
    cin>>numb_libs;
    for(i=0;i<numb_libs;i++)
    {
        int lib_no,no_of_books;
        cin>>lib_no>>no_of_books;
        for(j=0;j<no_of_books;j++)
        {
            int temp;
            cin>>temp;
            
        }
    }
}

