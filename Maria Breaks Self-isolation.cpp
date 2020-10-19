#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ara[n];
        for(ll i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        ll num=1;
        sort(ara,ara+n);
        ll cnt=n;
        for(ll i=n-1; i>-1; i--)
        {
            if(cnt<ara[i])
            {
                cnt--;
            }
            else
            {
                num=cnt+1;
                break;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
