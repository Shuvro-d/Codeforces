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
    while (t--)
    {
        ll n,a;
        cin>>n;
        set<ll> s;
        while (n--)
        {
             cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
