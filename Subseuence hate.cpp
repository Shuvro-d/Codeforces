#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        char cur=s[0];
        int pre[n+1]={};
        int x,y;
        for(int i=1;i<=n;i++)
        {
            x=0;
            if(s[i-1]=='1')
            ++x;
            pre[i]=pre[i-1]+x;
        }
        int las[n+2]={};
        for(int i=n;i>=0;i--)
        {
            x=0;
            if(s[i-1]=='1')
            ++x;
            las[i]=las[i+1]+x;
        }
        int ans=1001;
        for(int i=1;i<=n;i++)
        {
            x=min(las[i+1],n-i-las[i+1]);
            y=min(i-pre[i],pre[i]);
            ans=min(ans,x+y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
