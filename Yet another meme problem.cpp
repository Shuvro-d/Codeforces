/*Alien Vampire*/

#include<bits/stdc++.h>
#define        ls    long long int
#define        ll     long long int
#define        fr   for (int i=0; i < n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
       ll A,B,z=0;
       cin>>A>>B;
     if(B>=9){
        char s[1000000];
        ll y=0,x;
            sprintf(s,"%d",B);
            x=strlen(s);
            for(ll i=0;i<x;i++){
                if(s[i]=='9')y++;
            }
            if(x==y){
                z=x;
            }
            else{
                z=x-1;
            }
     }
     cout<<z*A<<endl;
    }
    return 0;
}
