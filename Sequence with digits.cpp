#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
ll min_fnc(ll n)
{
    vector<int>a;
    while(n!=0){
        ll x=n%10;
        a.push_back(x);
        n=n/10;
    }
    sort(a.begin(),a.end());
    return a[0];
}
ll max_fnc(ll n)
{
    vector<int>a;
    while(n!=0){
        ll x=n%10;
        a.push_back(x);
        n=n/10;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    return a[0];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        x--;
        while(x--)
        {
            ll mx=max_fnc(n);
            ll mn=min_fnc(n);
             if(mn==0){
                break;
             }
           n=n+(mx*mn);
        }
        cout<<n<<endl;
    }
    return 0;
}
