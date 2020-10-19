#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=(a^a)+(a^b);
        cout<<ans<<endl;
    }
    return 0;
}
