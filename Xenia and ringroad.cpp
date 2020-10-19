#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll ara[m];
    for(i=0;i<m;i++){
        cin>>ara[i];
    }
    ll moves=ara[0];
    for(i=1;i<m;i++){
       if(ara[i]<ara[i-1]){
        moves=moves+(n-ara[i-1]);
        moves=moves+ara[i];
       }
       else if(ara[i]>ara[i-1]){
        moves=moves+(ara[i]-ara[i-1]);
       }
       else if(ara[i]==ara[i-1]){
        moves=moves;
       }
    }
    cout<<moves-1<<endl;
    return 0;
}
