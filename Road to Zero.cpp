#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
     ll x,y,a,b;
     cin>>x>>y;
     cin>>a>>b;
     ll sum,sum1,sum2;
     ll z1,z2;
     if(x==0 && y==0){
        sum=0;
     }
     else if((x>0 && y>0) || (x<0 && y<0)){
        if(x>y)swap(x,y);
        z1=y-x;
        sum1=(z1*a)+(x*b);
        z2=y+x;
        if(z2<0)z2=z2*(-1);
        sum2=z2*a;
        sum=min(sum1,sum2);
     }
     else{
        if(x>y)swap(x,y);
        z1=y-x;
        sum=z1*a;
     }
     cout<<sum<<endl;
    }
    return 0;
}
