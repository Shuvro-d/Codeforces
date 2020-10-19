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
   ll t;
   cin>>t;
   while(t--){
   ll n;
   cin>>n;
   ll ara[n];
   for( i=0;i<n;i++){
    cin>>ara[i];
   }
   sort(ara,ara+n);
   ll arr[n-1];
    ll q;
    j=0;
    ll z=ara[0];
   for( i=1;i<n;i++){
     q=ara[i]-ara[i-1];
    arr[j]=q;
    j++;
   }
   sort(arr,arr+(n-1));
   cout<<arr[0]<<endl;
   }
    return 0;
}

