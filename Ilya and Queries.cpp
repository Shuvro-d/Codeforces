#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    ll ara[len];
    for(i=0;i<len;i++){
        ara[i]=0;
    }
    for(i=1;i<len;i++){
        if(s[i-1]==s[i])ara[i]=1;
    }
    ll arr[len];
    arr[0]=ara[0];
    for(i=1;i<len;i++){
        arr[i]=arr[i-1]+ara[i];
    }
    ll m;
    cin>>m;
    while(m--){
        ll l,r,ans=0;
        cin>>l>>r;
       ans=arr[r-1]-arr[l-1];
        cout<<ans<<endl;
    }
    return 0;
}
