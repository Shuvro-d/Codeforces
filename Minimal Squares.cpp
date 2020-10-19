#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
int main()
{
    int t;
   cin>>t;
   while(t--){
    int a,b,s,r,m;
    cin>>a>>b;
    s,r,m;
    r=min(a,b)+min(a,b);
    s=max(a,b);
    m=max(r,s);
    cout<<pow(m,2)<<endl;
   }
    return 0;
}
