#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        ll a,b,c;
       cin>>a>>b>>c;
       if(a>b)swap(a,b);
       if(b>c)swap(b,c);
       if(a>c)swap(a,c);
       if(a>b)swap(a,b);
        ll mx=b-a;
        ll mn=c-b;
        if(mx==mn)cout<<c+mx<<endl;
        else cout<<c+min(mx,mn)<<endl;
    }
    return 0;
}
