/*Alien Vampire*/

#include<bits/stdc++.h>
#define        ls    long long int
#define        ll     long long int
#define        fr   for (int i=0; i < n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll d,e,f,g;
        if(a<b)swap(a,b);
        if(a<c)swap(a,c);
        if(b<c)swap(b,c);
        d=a-b;
        e=a-c;
        f=d+e;
        if(f==n)cout<<"YES"<<endl;
        else if(n<f)cout<<"NO"<<endl;
        else{
            g=n-f;
            if(g%3==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
