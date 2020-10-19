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
    ll x;
    cin>>x;
    while(x--)
    {
        ll n;
        cin>>n;
        ll moves=0;
        if(n==1){
            moves=0;
        }
        else if(n==2){
            moves=1;
        }
        else{
                ll m=n/2;
                moves=((m*(m+1)*(m*2+1))/6)*8;
        }
        cout<<moves<<endl;
    }
    return 0;
}
