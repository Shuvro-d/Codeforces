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
   while(t--)
    {
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        ll y=(a-b)*n;
        ll z=(a+b)*n;
        if(y>c+d || z<c-d)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}
