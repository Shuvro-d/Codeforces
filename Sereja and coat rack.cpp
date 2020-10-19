#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll  i,j;
int main()
{
   ll n,d;
   cin>>n>>d;
   ll ara[n];
   for(i=0;i<n;i++){
    cin>>ara[i];
   }
   sort(ara,ara+n);
   ll m;
   cin>>m;
   ll sum=0;
   ll profit;
   if(m>n){
     ll rem=m-n;
     ll fine=d*rem;
     for(i=0;i<n;i++){
        sum=sum+ara[i];
     }
     profit=sum-fine;
     cout<<profit<<endl;
   }
   else{
    for(i=0;i<m;i++){
        sum=sum+ara[i];
    }
    cout<<sum<<endl;
   }
    return 0;
}
