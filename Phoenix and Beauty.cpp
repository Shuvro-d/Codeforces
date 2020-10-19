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
        set<int>a;
        set<int>::iterator it;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        if(a.size()>k)cout<<-1<<endl;
        else
        {
            cout<<n*k<<endl;
            while(n--)
            {
                for( it=a.begin(); it!=a.end(); it++)
                {
                    cout<<*it<<" ";
                }
                for(int j=0; j<k-a.size(); j++)
                {
                    cout<<1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
