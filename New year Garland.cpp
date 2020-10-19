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
    while(t--)
    {
       ll r,g,b;
       cin>>r>>g>>b;
       if(r>g)swap(r,g);
       if(g>b)swap(g,b);
       if(b-1 <=r+g){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
    }
    return 0;
}
