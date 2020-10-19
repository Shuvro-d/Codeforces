/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i <=m; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
  ll n;
  cin>>n;
  while (n--){
    ll x,y;
    cin>>x>>y;
    if(x>3){
        cout<<"Yes"<<endl;
    }
    else if (x == 1){
        if(y==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        if(y<=3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
  }
    return 0;
}

