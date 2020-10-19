/*Alien Vampire*/

#include<bits/stdc++.h>
#define        ls    long long int
#define        ll     long long int
#define        fr   for (int i=0; i < n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
      ll a,b,n;
     cin>>a>>b>>n;      ll c=a^b;
      if(n%3==0){cout<<a<<endl;}
      else if(n%3==1){cout<<b<<endl;}
      else {cout<<c<<endl;}
    }
    return 0;
}
