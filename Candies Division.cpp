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
    while(t--)
    {
       ll n,k,candies;
       cin>>n>>k;
       ll x,y,z;
       x=n/k;
       y=n-(x*k);
       z=k/2;
       ll rest_candies;
       rest_candies=min(y,z);
       candies=(x*k)+rest_candies;
        cout<<candies<<endl;
    }
    return 0;
}
