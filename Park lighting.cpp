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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll light=n*m;
        if(light%2!=0)
        {
            light=light+1;
        }
        cout<<light/2<<endl;
    }
    return 0;
}

