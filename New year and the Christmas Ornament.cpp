#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
     ll y,b,r;
     cin>>y>>b>>r;
     ll sum;
     while(1){
        if(b>=(r-1) && y>=(r-2)){
            sum=(r*3)-3;
            break;
        }
        else{
            r--;
        }
     }
     cout<<sum<<endl;
    return 0;
}
