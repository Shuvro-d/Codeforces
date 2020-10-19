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
    ll s;
    cin>>s;
    ll sum=0;
    ll i,p,q,r,m;
    ll z=s;
    for(i=0;i<z;i++){
        if(s>=10){
            p=s/10;
            q=10*p;
            m=s-q;
            r=p+m;
            sum=sum+q;
            s=r;
        }
        else{
            sum=sum+s;
            cout<<sum<<endl;
            break;
        }
    }
  }
    return 0;
}

