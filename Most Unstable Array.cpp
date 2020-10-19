#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int i,j;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0;
        if(n==1)
        {
            sum=0;
        }
        else if(n==2)
        {
            sum=m;
        }
        else if(n==m)
        {
            sum=2*n;
        }
        else
        {
           sum=m*2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
