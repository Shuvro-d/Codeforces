/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i <=m; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
  ll n;
  cin>>n;
  while (n--){
    ll c,sum;
    cin>>c>>sum;
    ll i,j,z=0;
    if(c==1){
        z=sum*sum;
        cout<<z<<endl;
    }
     else if(sum==1){
        z=1;
         cout<<z<<endl;
    }
      else if(sum<c){
        cout<<sum<<endl;
    }
    else if(c==sum){
        cout<<c<<endl;
    }
    else if(sum%c==0){
        z=c*(sum/c)*(sum/c);
         cout<<z<<endl;
    }
     else{
        ll p=sum/c;
        ll q=c*p;
        ll r=sum-q;
        ll s=q/c;
        ll x[c];
        z=0;
        for(i=0;i<c;i++){
            x[i]=s;
        }
        for(i=0;i<r;i++){
            x[i]++;
        }
        for(i=0;i<c;i++){
            z=z+(x[i]*x[i]);
        }
        cout<<z<<endl;
    }
  }
    return 0;
}

