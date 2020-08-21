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
int n,sgnup,min,perday,first;
int tuesday;
float greedy[libs],turc;
int orderi[libs],signups[libs],bks[libs];
int bulk[libs][20];
for(i=0;i<libs;i++)
{
    for(j=0;j<20;j++)
        bulk[i][j]=-1;
}
for(i=0;i<libs;i++)
{
    cin>>bks[i]>>signups[i]>>perday;
    for(j=0;j<bks[i];j++)
        { 
              cin>>bulk[i][j];
 
 
        }
 
    greedy[i]=(n*1.0)/signups[i];
    orderi[i] =i;
 
}
 
 
 
for(i=0;i<libs-1;i++)
{
    for(j=i+1;j<libs;j++)
        {
            if(greedy[i]<greedy[j])
            {   

                turc=greedy[i];
                greedy[i]=greedy[j];
                greedy[j]=turc;
                for(int k = 0; k < 20; k++) {
                    tuesday = bulk[i][k];
                    bulk[i][k] = bulk[j][k];
                    bulk[j][k] = tuesday;
                }

                tuesday=signups[i];
                signups[i]=signups[j];
                signups[j]=tuesday;
 
                tuesday=orderi[i];
                orderi[i]=orderi[j];
                orderi[j]=tuesday;
 
                tuesday=bks[i];
                bks[i]=bks[j];
                bks[j]=tuesday;
            }
 
        }
}
 
int daycount=0,number=0;
for(i=0;daycount<days+1000;i++)
{
    daycount+=signups[i];
    daycount+=1;
 
}
 
cout<<i-1<<endl;
daycount=0;
for(i=0;daycount<days+1000;i++)
{
    daycount+=signups[i];
    daycount+=1;
 
    cout<<orderi[i]<<" "<<bks[i]<<endl;
    for(j=0;j<bks[i];j++)
    {
        if(bulk[i][j]==-1)
            break;
        cout<<bulk[i][j]<<" ";
    }
 
    cout<<endl;
 
}
 
 
 
}

