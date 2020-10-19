#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;

int main()
{
    int n,t;
        cin>>n>>t;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        int num=0;
        int k=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=t)
            {
                sum=sum+a[i];
                num++;
                if(sum>t)
                {
                     while(sum>t)
                    {
                        sum=sum-a[k];
                        k++;
                        num--;
                    }
                    ans=max(ans,num);
                }
                else{
                     ans=max(ans,num);
                }
        }
        }
        cout<<ans<<endl;
    return 0;
}

