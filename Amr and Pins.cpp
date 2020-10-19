#include <bits/stdc++.h>
#define        ll     long long int
#define        ld    long double
using namespace std;
int main()
{
    ll r,a,b,c,d;
    cin>>r>>a>>b>>c>>d;
    ll p=r+r;
    if(a==c and b==d)
    {
        cout<<0<<endl;
    }
    else if(a==c)
    {
        if((max(b,d)-min(b,d))%p==0)cout<<((max(b,d)-min(b,d))/p)<<endl;
        else cout<<((max(b,d)-min(b,d))/p)+1<<endl;
    }
    else if(b==d)
    {
        if((max(a,c)-min(a,c))%p==0)cout<<((max(a,c)-min(a,c))/p)<<endl;
        else cout<<((max(a,c)-min(a,c))/p)+1<<endl;
    }
    else
    {
        if(b>d)
        {
            swap(a,c);
            swap(b,d);
        }
        if(a>c)
        {
            int x=a-c;
            c=c+x+x;
        }
        if(a<0)
        {
            c=c+(a*(-1));
            a=0;
        }
        if(b<0)
        {
            d=d+(b*(-1));
            b=0;
        }
        ld x=sqrt(pow(c - a, 2) + pow(d - b, 2));
        cout<<ceil(x/(2*r))<<endl;
    }
    return 0;
}
