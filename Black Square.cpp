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
    ll a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
     cin>>s;
     ll len=s.length();
     ll cal=0;
     for(ll i=0;i<len;i++){
        if(s[i]=='1')cal+=a1;
        else if(s[i]=='2')cal+=a2;
        else if(s[i]=='3')cal+=a3;
        else cal+=a4;
     }
     cout<<cal<<endl;
    return 0;
}
