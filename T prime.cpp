#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
int main()
{
    ll t;
    cin>>t;
    ll ara[t];
    for(ll i=0; i<t; i++)
    {
        cin>>ara[i];
    }
    for(ll i=0; i<t; i++)
    {
        if(ara[i]==1){
            cout<<"NO"<<endl;
        }
        else if (isPerfectSquare(ara[i]))
        {
            int  N=sqrt(ara[i]);
            bool flag=true;
            for(int i = 2; i <= sqrt(N); i++)
            {
                if(N% i == 0)
                {
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
