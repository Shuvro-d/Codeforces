#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll time=0;
    if(y1==y2){
        time=abs(x1-x2);
    }
    else if(x1==x2){
        time=abs(y1-y2);
    }
    else{
        time=abs(x2-x1)+abs(y1-y2)+2;
    }
    cout<<time<<endl;
   }
    return 0;
}
