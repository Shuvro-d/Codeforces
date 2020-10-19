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
        ll a, b, k;
        cin>>a>>b>>k;
        ll pos = (a - b) * (k / 2) + a * (k % 2);
        cout<<pos<<endl;
    }
    return 0;
}
