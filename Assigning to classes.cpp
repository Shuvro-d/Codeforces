/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i <=n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while (t--){
        ll n;
    cin>>n;
    ll ara[2*n];
    ll i,j;
    for(i=0;i<2*n;i++){
        cin>>ara[i];
    }
    sort(ara,ara+(2*n));
    cout<<abs(ara[n-1]-ara[n])<<endl;
  }
    return 0;
}

