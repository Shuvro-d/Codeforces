#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int num=0;
    if(m==n)cout<<0<<endl;
    else if(m<n)cout<<n-m<<endl;
    else
    {
        while(m>n)
        {
            if(m%2==0)
            {
                m=m/2;
                num++;
            }
            else
            {
                m++;
                num++;
            }
        }
        if(n==m)cout<<num<<endl;
        else cout<<num+(n-m)<<endl;
    }
    return 0;
}
