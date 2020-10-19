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
    char s[1001];
    int  moves=0,a,d;
    cin>>s;
    a=97;
    for(i=0;i<strlen(s);i++){
        d=abs(a-s[i]);
        if(d>13){
            d=26-d;
        }
        moves=moves+d;
        a=s[i];
    }
    cout<<moves<<endl;
    return 0;
}
