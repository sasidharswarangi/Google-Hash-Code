#include <bits/stdc++.h>
using namespace std;

int main() {
int book,libs,days;
int i,j;
cin>>book>>libs>>days;
int arr[book];
for(i=0;i<book;i++)
{
    cin>>arr[i];
}

int n[libs],sgnup[libs],min,perday,first,dumy;

vector<pair<int,int>> vect;
vector<vector<int>> arr2;
int temp2;
for(i=0;i<libs;i++)
{
    cin>>n[i]>>sgnup[i]>>perday;
    vector<int> temp;
    for(j=0;j<n[i];j++)
        {
            cin>>temp2;
            temp.push_back(temp2);
        }
    arr2.push_back(temp);
    vect.push_back(make_pair(n[i],i));
}

sort(vect.begin(), vect.end());

// cout<<100<<endl;
// for(i=0;i<100;i++)
// {
//     cout<<vect[i].second<<" 1000"<<endl;
//     int varsatile;
//     varsatile=vect[i].second*1000;

//     for(j=0;j<1000;j++)
//         {
//             cout<<varsatile+j<<" ";
//         }
//     cout<<endl;
// }
//<<" "<<arr2[vect[i].second].size()
    cout<<libs<<endl;
 for (int i=libs-1; i>=0; i--) 
    { 
        // "first" and "second" are used to access 
        // 1st and 2nd element of pair respectively 
        cout << vect[i].second << " " << vect[i].first<< endl; 
        for(j=0;j<vect[i].first;j++)
            cout<<arr2[vect[i].second][j]<<" ";
        cout<<endl;
    } 
  
    return 0; 


}