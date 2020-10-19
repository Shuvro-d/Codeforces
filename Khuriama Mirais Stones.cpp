/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll n,i,j,m,x,y,z,sum;
    scanf("%lld",&n);
    ll a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    c[0]=a[0];
    d[0]=b[0];
    for(i=1;i<n;i++){
        c[i]=a[i]+c[i-1];
        d[i]=b[i]+d[i-1];
    }
    scanf("%lld",&m);
    while(m--){
        scanf("%lld %lld %lld",&x,&y,&z);
        sum=0;
        if(x==1){
                sum=(c[z-1]-c[y-1]+a[y-1]);
        }
        else{
            sum=(d[z-1]-d[y-1]+b[y-1]);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
