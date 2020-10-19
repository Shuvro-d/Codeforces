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
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   int sum=0;
   int cost=0;
   while(sum!=n){
    sort(a,a+n);
    sum=0;
    int mx=a[n-1];
    int b[mx];
    for(i=1;i<=mx;i++){
        b[i]=0;
    }
    for(i=0;i<n;i++){
        int x=a[i];
        b[x]++;
    }
   //for(i=1;i<=mx;i++)cout<<b[i]<<endl;
   sum=0;
    for(i=1;i<=mx;i++){
        if(b[i]==1)sum++;
    }
    if(sum==n){
        cout<<cost<<endl;
        break;
    }
    else{
        for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a[i+1]++;
                cost++;
            }
        }
    }
   }
    return 0;
}
