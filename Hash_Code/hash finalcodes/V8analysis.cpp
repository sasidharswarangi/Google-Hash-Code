#include <bits/stdc++.h>
using namespace std;
int arr[100005];
bool func(int a,int b)
{
    return (arr[a]>arr[b]);
}
int main() {
int book,libs,days;
int i,j;
cin>>book>>libs>>days;

for(i=0;i<book;i++)
{
    cin>>arr[i];
}

int no_ofbooks[libs],sgnup[libs],perday[libs];

vector<pair<int,int>> vect;
vector<vector<int>> arr2;
int temp2;

for(i=0;i<libs;i++)
{
    cin>>no_ofbooks[i]>>sgnup[i]>>perday[i];
    vector<int> temp;
    for(j=0;j<no_ofbooks[i];j++)
        {
            cin>>temp2;
            
            
            temp.push_back(temp2);
        }
    sort(temp.begin(),temp.end(),func);
    arr2.push_back(temp);
   // vect.push_back(make_pair(no_ofbooks[i],i));
}

//sort(sgnup,sgnup+libs);

// for(i=0;i<libs;i++)
//     cout<< sgnup[i]<<endl;

// for(i=0;i<libs;i++)
// {
//     cout<<i<<endl;
//         for(j=0;j<no_ofbooks[i];j++)
//             cout<<arr2[i][j]<<" ";
//     cout<<endl;
// }
int active[libs];
for(i=0;i<libs;i++)
{
    active[i]=1;
}
int k;
cout<<libs<<endl;
for(i=0;i<libs;i++)
{
    int points,cons=0;
    long double greedy,max=0;
    for(k=0;k<libs;k++)
    {       points=0;
                for(j=0;j<no_ofbooks[k];j++)
                    points+=arr[arr2[k][j]];
            greedy=((float)points)/((float)sgnup[k]);

            if(greedy>max)
            {
                max=greedy;
                cons=k;
            }
    }
    if(active[cons]==1)
        active[cons]=0;
    else
    {
        cout<<i;
        break;
    }
    
    // sort(arr2[cons].begin(),arr2[cons].end(),func);
    // cout<<cons<<" "<<no_ofbooks[cons]<<endl;
  
    // for(j=0;j<no_ofbooks[cons];j++)
    //     cout<<arr2[cons][j]<<" ";
    // cout<<endl;
     
    for(j=0;j<no_ofbooks[cons];j++)
        arr[arr2[cons][j]]=0;
}

}