#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int even=0,odd=0;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        bool flag=false;
        if(x%2==0)
        {
            int rod=1;
            int rvn=x-1;
            while(rod<x && rvn>0)
            {
                if(rod<=odd && rvn<=even)
                {
                    flag=true;
                    break;
                }
                else
                {
                    rod=rod+2;
                    rvn=rvn-2;
                }
            }
        }
        else
        {
            int rod=1;
            int rvn=x-1;
            while((rod<x || rod==x)&& (rvn>0 || rvn==0))
            {
                if(rod<=odd && rvn<=even)
                {
                    flag=true;
                    break;
                }
                else
                {
                    rod=rod+2;
                    rvn=rvn-2;
                }
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
