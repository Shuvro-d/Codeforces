#include<bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0; l<t; l++)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll s=0;
        ll x=n-2;
        while(k--)
        {
            s+=a[x];
            a[x]=0;
            x--;
        }
        a[n-1]=a[n-1]+s;
        sort(a,a+n);
        cout<<a[n-1]-a[0]<<endl;
    }
    return 0;
    }
