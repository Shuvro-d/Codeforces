/*Alien Vampire*/

#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        fr   for (int i=0; i < n; i++)
#define        pf    printf
#define        dl     double
using namespace std;

int main()
{
       ll n;
       cin>>n;
       char ara[n];
       fr{
       cin>>ara[i];
       }
       ll nul=0,nur=0;
       fr{
       if(ara[i]=='L'){
        nul++;
       }
       else {
        nur++;
       }
       }
       ll result=nul+nur+1;
       cout<<result<<endl;
    return 0;
}

