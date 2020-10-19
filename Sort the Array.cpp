#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;


int main()
{
    ll n,x;
    cin>>n;
    vector<ll>a;
    vector<ll>b;
    vector<ll>c;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
        b.push_back(x);
        c.push_back(x);
    }
    sort(c.begin(),c.end());
    reverse(b.begin(),b.end());
    if(c==b){
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<n<<endl;
        return 0;
    }
    if(a==c){
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        return 0;
    }
    ll p,q;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==c[i])
        {
            continue;
        }
        else
        {
            p=i;
            break;
        }
    }
    for(ll i=n-1; i>=0; i--)
    {
        if(a[i]==c[i])
        {
            continue;
        }
        else
        {
            q=i;
            break;
        }
    }
   reverse(a.begin()+p,a.begin()+(q+1));
    if(a==c){
        cout<<"yes"<<endl;
        cout<<p+1<<" "<<q+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
