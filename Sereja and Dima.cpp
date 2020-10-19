
#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        ld    long double
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
   ll n;
   cin>>n;
   ll ara[n];
   for(i=1;i<=n;i++){
    cin>>ara[i];
   }
   ll sereja=0,dima=0;
   ll z=n,x=1,a=1;
   while(n--){
    if(x%2==0){
         if(ara[a]>ara[z]){
            dima=dima+ara[a];
            a++;
        }
        else{
            dima=dima+ara[z];
            z--;
        }
    }
    else{
        if(ara[a]>ara[z]){
            sereja=sereja+ara[a];
            a++;
        }
        else{
            sereja=sereja+ara[z];
            z--;
        }
    }
    x++;
   }
   cout<<sereja<<" "<<dima<<endl;
    return 0;
}
