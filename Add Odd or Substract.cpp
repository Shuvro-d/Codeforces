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
    while(t--){
    ll a,b;
    cin>>a>>b;
    ll cnt;
    if(a<b){
        if((b-a)%2==0){
            cnt=2;
        }
        else{
            cnt=1;
        }
    }
    else if(a==b){
        cnt=0;
    }
    else {
        if((a-b)%2==0){
            cnt=1;
        }
        else{
            cnt=2;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}

