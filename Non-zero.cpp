/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i <=m; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
   ll n;
   cin>>n;
  while(n--){
    ll m;
    cin>>m;
    ll ara[m],i;
    for(i=0;i<m;i++){
    cin>>ara[i];
    }
    ll sum=0;
    for(i=0;i<m;i++){
    sum=sum+ara[i];
    }
    ll cnt=0;
    if(sum==0){
        for(i=0;i<m;i++){
            if(ara[i]==0){
                ara[i]=1;
                cnt++;
            }
        }
        for(i=0;i<m;i++){
            sum=sum+ara[i];
        }
        if(sum==0){
            ara[0]=ara[0]+1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    else{
            sum=0;
       for(i=0;i<m;i++){
            if(ara[i]==0){
                ara[i]=1;
                cnt++;
            }
        }
        for(i=0;i<m;i++){
            sum=sum+ara[i];
        }
        if(sum==0){
            ara[0]=ara[0]+1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
  }
    return 0;
}
