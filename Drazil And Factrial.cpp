#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
#define MAX 500
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=2; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}

void fact_factorize( int n,vector<int>&v)
{
    int a[]= {7,5,3,2};
    for(int i=0; i<4; i++)
    {
        int x=factorial(a[i]);
        if(n%x==0)
        {
            while(n%x==0)
            {
                n=n/x;
                v.push_back(a[i]);
            }
        }
        if(n==1)break;
    }
}

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%1d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int fac=factorial(a[i]);
        fact_factorize(fac,v);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)cout<<v[i];
    cout<<endl;
    return 0;
}
