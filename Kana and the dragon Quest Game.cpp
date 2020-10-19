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
        ll x,n,m,z;
        cin>>x>>n>>m;
        z=x;
          if((x-(10*m))<=0)
        {
            x=0;
            goto a;
        }
        while(n--)
        {
            x=(x/2)+10;
            if((x-(10*m))<=0)
            {
                x=0;
                break;
            }
        }
        a:
        if(x<=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
