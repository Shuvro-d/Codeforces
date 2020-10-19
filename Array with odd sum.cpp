#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        ld    long double
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        ll ara[a];
        ll odd=0,even=0,sum=0;
        for(i=0;i<a;i++){
            cin>>ara[i];
             if(ara[i]%2!=0 || ara[i]==1){
               odd++;
           }else{
               even++;
           }
           sum=sum+ara[i];
        }
        if(sum%2!=0 || sum==1){
           cout<<"YES"<<endl;
       }
        else{
           if(odd!=0 && even!=0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
    }
    return 0;
}
