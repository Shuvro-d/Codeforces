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
     ll t;
    cin>>t;
    ll x,y,z,a,b,c;
   while(t--)
    {
        cin>>x>>y>>a>>b;
        z=y-x;
        c=a+b;
        if(z%c==0)cout<<z/c<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
