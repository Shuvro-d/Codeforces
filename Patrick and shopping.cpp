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
   int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int ara[4];
    ara[0]=d1+d2+d3;
    ara[1]=d1*2+d2*2;
    ara[2]=d1*2+d3*2;
    ara[3]=d2*2+d3*2;
    sort(ara,ara+4);
    cout<<ara[0];
    return 0;
}
