#include <bits/stdc++.h>
using namespace std;
int arr[100005];
bool func(int a,int b)
{
    return (arr[a]>arr[b]);
}

int main() {
int book,libs,days;
int i,j,k,l;
cin>>book>>libs>>days;
for(i=0;i<book;i++)
{
    cin>>arr[i];
}
int no_ofbooks[libs],sgnup[libs],perday[libs];
vector<pair<int,int>> vect;
vector<vector<int>> arr2;

for(i=0;i<libs;i++)
{

    cin>>no_ofbooks[i]>>sgnup[i]>>perday[i];
    int temp2;
    vector<int> temp;
    for(j=0;j<no_ofbooks[i];j++)
        {
            cin>>temp2;
            temp.push_back(temp2);
        }
    sort(temp.begin(),temp.end(),func);
    arr2.push_back(temp);
}

int arr[17]={204,210,694,719,595,774,901,618,422,369,312,622,672,828,454,563,112}; 
for



}