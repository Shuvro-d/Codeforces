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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(i%2!=a[i]%2)
            {
                if( i%2==0)
                {
                    for(int j=i+1; j<n; j++)
                    {
                        if(a[j]%2==0 && j%2!=0)
                        {
                            swap(a[i],a[j]);
                            cnt++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int j=i+1; j<n; j++)
                    {
                        if(a[j]%2==1 && j%2!=1)
                        {
                            swap(a[i],a[j]);
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if(i%2!=a[i]%2)
            {
                flag=false;
            }
        }
        if(flag)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

