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
        char a[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin>>a[i][j];
            }
        }
        bool flag=true;
        for (int i = 0; i <n-1; i++)
        {
            for (int j = 0; j<n-1; j++)
            {
                if (a[i][j]=='1' && a[i + 1][j]=='0' && a[i][j + 1]=='0')
                {
                    flag= false;
                }
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}

