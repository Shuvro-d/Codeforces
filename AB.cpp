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
   ll n, i, j, k;
   cin>>n;
   ll a[n], b[n], c[n];
   for(i=0; i<n; i++) cin>>a[i];
   for(i=0; i<n-1; i++) cin>>b[i];
   for(i=0; i<n-2; i++) cin>>c[i];
   sort(a, a+n);
   sort(b, b+n-1);
   sort(c, c+n-2);
   bool flag=false;
   ll ans;
   for(i=0; i<n-1; i++){
       if(a[i]!=b[i]){
           flag=true;
           ans=a[i];
           break;
       }
   }
   if(!flag) ans=a[n-1];
   flag=false;
   cout<<ans<<endl;
    for(i=0; i<n-2; i++){
       if(b[i]!=c[i]){
           flag=true;
           ans=b[i];
           break;
       }
   }
   if(!flag) ans=b[n-2];
    cout<<ans<<endl;
   return 0;
}
