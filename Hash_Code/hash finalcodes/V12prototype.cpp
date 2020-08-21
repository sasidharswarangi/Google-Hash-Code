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

int active[libs];

for(i=0;i<libs;i++)
{
    active[i]=1;
}
int count=0;
for(i=0;i<days; )
{
    long double greedy,max=0;
    int libno,stowval;
    for(j=0;j<libs;j++)
    {   
        if(active[j]==0)
            continue;
        sort(arr2[j].begin(),arr2[j].end(),func);
        int start_date=i;
        int bkcount=0;
        long long points=0;
        start_date+=sgnup[j];
 
        while(start_date<days&&bkcount<no_ofbooks[j])
        {
        
            for(k=0;k<perday[j]&&bkcount<no_ofbooks[j];k++)
                {
                    points+=arr[arr2[j][bkcount]];
                    bkcount++;        
                }
            start_date++;
        }
        
        greedy=((float)points/(float)sgnup[j]);
        if(greedy>max)
        {
            libno=j;
            max=greedy;
            stowval=bkcount;
        }
    }
    cout<<libno<<" "<<no_ofbooks[libno]<<endl;
    i+=sgnup[libno];
    active[libno]=0;
    for(j=0;j<no_ofbooks[libno];j++)
         cout<<arr2[libno][j]<<" ";
    cout<<endl;
    
    for(j=0;j<no_ofbooks[libno]&&j<stowval;j++)
        arr[arr2[libno][j]]=0;

    count++;
    
}

}