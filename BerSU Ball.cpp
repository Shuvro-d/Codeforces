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
    ll n,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    ll b[m];
     for(i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    ll pair=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                pair++;
                b[j]=1000;
                break;
            }
        }
    }
    cout<<pair<<endl;
    return 0;
}
