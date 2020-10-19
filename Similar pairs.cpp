#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int eve=0;
        int od=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                eve++;
            else
                od++;
        }
        if(eve==n || od==n)
        {
            cout<<"YES"<<endl;
        }
        else if(eve%2!=od%2)
        {
              cout<<"NO"<<endl;
        }
        else
        {
            if(eve%2==0 && od%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                bool flag=false;
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(j!=i)
                        {
                            if(abs(a[i]-a[j])==1)
                            {
                                flag =true;
                                break;
                            }
                        }
                    }
                }
                if(flag)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
    }
    return 0;

}

