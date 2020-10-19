#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll time;
         if(b>=a)
        {
            time=b;
        }
        else
        {
            if(d>=c)
            {
                time=-1;
            }
            else
            {
                ll s,m,n;
                s=a-b;
                n=c-d;
                m;
                if(s%n==0)
                    m=s/n;
                else
                    m=s/n +1;
                time=b+(m*c);
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
