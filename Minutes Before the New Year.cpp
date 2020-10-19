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
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll total = 24 * 60;
        ll have = (a * 60) + b;
        ll m=total-have;
        cout<<m<<endl;
    }
    return 0;
}
