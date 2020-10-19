#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
#define    q_size  5
using namespace std;
int main()
{
   vector<ll> a;
   vector<ll>::iterator it;
   ll n,i,x,b,q;
   cin>>n;
   fr
   {
       cin>>x;
       a.push_back(x);
   }
   sort(a.begin(),a.end());
   cin>>q;
   while(q--){
    cin>>b;
    it=upper_bound(a.begin(),a.end(),b);
    cout<<distance(a.begin(),it)<<endl;
   }
   return 0;
}
