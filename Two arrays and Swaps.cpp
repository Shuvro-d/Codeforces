#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        int sum1=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum1=sum1+a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        while(k--)
        {
            sort(a,a+n);
            sort(b,b+n);
            int sum2=0;
            int mn=0,mx=n-1;
            swap(a[mn],b[mx]);
            for(i=0; i<n; i++)
            {
                sum2=sum2+a[i];
            }
            sum1=max(sum1,sum2);
        }
        cout<<sum1<<endl;
    }
    return 0;
}
