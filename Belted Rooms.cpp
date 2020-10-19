#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll clockwise=0;
        ll anticlockwise=0;
        ll both=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='-')both++;
            else if(s[i]=='>')clockwise++;
            else anticlockwise++;
        }
        if(clockwise==n or anticlockwise==n or anticlockwise==0 or clockwise==0)
            cout<<n<<endl;
        else
        {
            ll num=0;
            if(s[0]=='-' or s[n-1]=='-')num++;
            for(ll i=1; i<n; i++)
            {
                if(s[i]=='-' or s[i-1]=='-')num++;
            }
            cout<<num<<endl;
        }
    }
    return 0;
}
