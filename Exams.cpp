#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;

void srt(vector<ll>&a, vector<ll>&b,ll n)
{
    ll item,i,j,item1;
    for(i=1; i<n; i++)
    {
        item=a[i];
        item1=b[i];
        j=i-1;
        while(j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            b[j+1]=b[j];
            j=j-1;
        }
        a[j+1]=item;
        b[j+1]=item1;
    }
}
void srt2(vector<ll>&a,vector<ll>&b,ll n)
{
    ll x,y=0;
    for(ll i=0; i<n; i++)
    {
        x=i;
        y=1;
        for(ll j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                y++;
            }
        }
        ll m=x+y;
        sort(b.begin()+x,b.begin()+m);
    }
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>a;
    vector<ll>b;
    for(ll i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    srt(a,b,n);
    srt2(a,b,n);
    ll day=min(a[0],b[0]);
    for(ll i=1; i<n; i++)
    {
        if(b[i]<day)
        {
            day=a[i];
        }
        else
        {
            day=min(a[i],b[i]);
        }
    }
    cout<<day<<endl;
    return 0;
}

