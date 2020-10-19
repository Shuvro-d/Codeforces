#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
ll count_digits(ll n)
{
    ll cnt=0;
    while(n!=0)
    {
        n=n/10;
        ++cnt;
    }
    return cnt;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll digits=count_digits(n);
        //cout<<digits<<endl;
        if(digits==1)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else
        {
            ll a[10];
            ll b[]= {1,10,100,1000,10000,100000};
            ll cnt=0;
            ll c[10];
            ll i=0;
            while(n>0)
            {
                ll mod=n%10;
                a[i]=mod;
                n=n/10;
                i++;
                cnt++;
            }
            for(i=0; i<cnt; i++)
            {
                c[i]=a[i]*b[i];
            }
            int q=0;
            for(i=0; i<cnt; i++)
            {
                if(c[i]!=0)
                    q++;
            }
            cout<<q<<endl;
            for(i=0; i<cnt; i++)
            {
                if(c[i]!=0)
                    cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
