#include<bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0; l<t; l++)
    {
         ll n;
        cin>>n;
       vector<int>v;
       int x,y;
       x=n;
       y=n-1;
       int z=n-1;
       int ans;
       while(z--){
            v.push_back(x);
            v.push_back(y);
        if((x+y)%2==0)ans=(x+y)/2;
        else ans=(x+y)/2 +1;
        x=ans;
        y=y-1;
       }
       cout<<ans<<endl;
       for(int i=0;i<v.size();i++){
        if((i+1)%2==0)cout<<v[i]<<endl;
        else cout<<v[i]<<" ";
       }
    }
    return 0;
}
