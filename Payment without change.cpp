/*KnocK KnocK*/

#include<bits/stdc++.h>
#define        ll    long long int
#define        fr   for(i=0;i<N;i++)

using namespace std;


int main()
{
   ll q;
   cin>>q;
   while(q--){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll d,g;
      d = min (s/n,a);
      g= s-d*n;
    if (g <= b)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
   }
    return 0;
}
