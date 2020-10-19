#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        ld    long double
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
    int n,t,sum=0,time=0,a;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum = (86400-a)+sum;
        time++;
        if(t<=sum)
            break;
    }
    cout<<time<<endl;
    return 0;
}
