/*Shuvro Das*/

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
   while(t--){
    ll n,i,j;
    cin>>n;
    ll ara[n];
    ll mid=n/2;
    for(i=0;i<n;i++){
        ara[i]=pow(2,i+1);
    }
    /*for(i=1;i<=n;i++){
        cout<<ara[i]<<endl;
    }*/
    ll aram[2*n];
    ll sum=0;
    for(i=0;i<n;i++){
        sum=sum+ara[i];
    }
    //cout<<sum<<endl;
    for(i=0;i<n;i++){
        aram[i]=ara[i];
    }
    for(i=n,j=0;i<2*n;i++,j++){
        aram[i]=ara[j];
    }
    /*for(i=1;i<=2*n;i++){
        cout<<aram[i]<<endl;
    }*/
    ll b[n],sm;
    for(i=0;i<n;i++){
            sm=0;
        for(j=i;j<i+mid;j++){
            sm=sm+aram[j];
        }
         b[i]=sm;
    }
    /*for(i=1;i<=n;i++){
        cout<<b[i]<<endl;
    }*/
    ll c[n],x;
    for(i=0;i<n;i++){
        c[i]=abs(b[i]-(sum-b[i]));
    }
    sort(c,c+n);
   /* for(i=0;i<n;i++){
        cout<<c[i]<<endl;
    }*/
    cout<<c[0]<<endl;
   }
    return 0;
}
