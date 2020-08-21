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

int n,sgnup[libs],min,perday,first,dumy;

vector<pair<int,int>> vect;


for(i=0;i<libs;i++)
{
    cin>>n>>sgnup[i]>>perday;
    for(j=0;j<n;j++)
        cin>>dumy;
    vect.push_back(make_pair(sgnup[i],i));
}

sort(vect.begin(), vect.end());

cout<<100<<endl;
for(i=0;i<100;i++)
{
    cout<<vect[i].second<<" 1000"<<endl;
    int varsatile;
    varsatile=vect[i].second*1000;

    for(j=0;j<1000;j++)
        {
            cout<<varsatile+j<<" ";
        }
    cout<<endl;
}

//  for (int i=0; i<libs; i++) 
//     { 
//         // "first" and "second" are used to access 
//         // 1st and 2nd element of pair respectively 
//         cout << vect[i].first << " " << vect[i].second << endl; 
//     } 
  
//     return 0; 


}