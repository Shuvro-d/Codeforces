#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define        ll     long long
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

///Used ordered set (policy based data structure)..Easier and more efficient than merge sort..

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ara[n];
    ordered_set so;
    ll ans=0;
    vector<ll> v[26];
    for (ll i = 0; i < n; i++)
    {
        ll x = s[i] - 'a';
         v[x].push_back(i);
    }
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = 0; j <v[i].size(); j++)
        {
            ll k = v[i][v[i].size() - 1 - j];
            ara[v[i][j]] = n - k - 1;
        }
    }
    for(ll i=0;i<n;i++){
        ll k,l;
        k=ara[i];
        so.insert(k);
        l=so.order_of_key(k);
        ans=ans+(i-l);
    }
    cout<<ans<<endl;
    return 0;
}
