/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
   ll n;
   cin>>n;
   ll ara[n];
   ll i,x=0,y=0,z=0;
   for(i=0;i<n;i++){
    cin>>ara[i];
    if(ara[i]%3==0)x++;
    else if(ara[i]%3==1)y++;
    else z++;
   }
 ll num=x;
 num=num+min(y,z);
 if(y>z){
    y=y-z;
    num=num+y/3;
 }
 else{
    z=z-y;
    num=num+z/3;
 }
 cout<<num<<endl;
    }
    return 0;
}

