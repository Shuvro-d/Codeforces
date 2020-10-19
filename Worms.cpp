#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
ll binary_search(ll a[],ll n,ll x)
{
    ll left=0,right=n-1;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(a[mid-1]<x && a[mid]>=x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
     return -1;
}
int main()
{
    ll n,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[n],c[n];
    c[0]=a[0];
    for(i=1;i<n;i++){
            c[i]=c[i-1]+a[i];
    }
    b[0]=1;
    for(i=1;i<n;i++){
        b[i]=c[i-1]+1;
    }
    /*for(i=0;i<n;i++){
        cout<<b[i]<<" "<<c[i]<<endl;
    }*/
    cin>>m;
    ll d[m];
    for(i=0;i<m;i++){
        cin>>d[i];
    }
    for(i=0;i<m;i++){
        ll x=d[i];
       ll cnt=binary_search(c,n,x);
       if(cnt==-1)cnt=0;
        cout<<cnt+1<<endl;
    }
    return 0;
}
