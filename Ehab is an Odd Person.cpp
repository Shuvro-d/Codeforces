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
    ll t;
    cin>>t;
    ll ara[t];
    ll i,z;
    for(i=0;i<t;i++){
        cin>>ara[i];
    }
    ll ev=0,od=0;
    for(i=0;i<t;i++){
        if(ara[i]%2==0)
            ev++;
        else
            od++;
    }
    if(ev>0 && od>0)
        sort(ara,ara+t);
    for(i=0;i<t;i++){
        cout<<ara[i]<<" ";
    }
    return 0;
}

