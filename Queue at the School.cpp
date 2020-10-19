#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    ll n,t;
    cin>>n>>t;
    char a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    while(t--){
        for(ll i=0;i<n-1;i++){
            if(a[i]=='B' && a[i+1]=='G'){
                swap(a[i],a[i+1]);
                i++;
            }
        }
    }
    for(ll i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
