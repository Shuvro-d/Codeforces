#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,x;
      cin>>n>>x;
      if(n<3)cout<<1<<endl;
      else{
          int f=1;
          n=n-2;
          if(n%x==0)cout<<(n/x)+f<<endl;
          else cout<<(n/x)+f+1<<endl;
      }
    }
    return 0;
}
