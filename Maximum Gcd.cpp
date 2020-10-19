#include<bits/stdc++.h>
#define        ll     long long int
/** Shuvro**/
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      ll n;
      cin>>n;
      if(n%2!=0){
       n--;
      }
    cout<<n/2<<endl;
    }
    return 0;
}

