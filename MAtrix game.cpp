#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int mx=max(m,n);
        int mn=min(m,n);
        int cnt1=0;
        for(int i=0; i<n; i++)
        {
             bool flag=true;
            for(int j=0; j<m; j++)
            {
                if(a[i][j]==1){
                      flag=false;
                      break;
                }
            }
            if(flag)
                cnt1++;
        }
        int cnt2=0;
       for(int j=0; j<m; j++)
        {
             bool flag=true;
            for(int i=0; i<n; i++)
            {
              if(a[i][j]==1){
                      flag=false;
                      break;
                }
            }
            if(flag)
                cnt2++;
        }
        int cnt=min(cnt1,cnt2);
        if(cnt%2==0)cout<< "Vivek"<<endl;
        else cout<< "Ashish"<<endl;
    }

    return 0;
}
