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
    ll n;
    cin>>n;
    ll ara[12];
    for(i=0;i<12;i++){
        cin>>ara[i];
    }
    sort(ara,ara+12);
    ll sum=0,num=1;
    if(n==0){
        cout<<sum<<endl;
        return 0;
    }
    for(i=11;i>=0;i--){
        sum=sum+ara[i];
        if(sum>=n) {
                break;
        }
        num++;
    }
    cout<<num<<endl;
    return 0;
}
