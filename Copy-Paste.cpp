#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        while(1)
        {
            int mum=0;
            sort(a,a+n);
            for(int i=1; i<n; i++)
            {
                a[i]=a[i]+a[0];
                if(a[i]<=k)
                mum++;
            }
            if(a[1]>k)break;
            sum=sum+mum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
