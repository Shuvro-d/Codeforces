#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    if(s>n*9 or (s==0 and n>1))
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else if(n==1 and s==0)
    {
        cout<<0<<" "<<0<<endl;
    }
    else
    {
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            a[i]=9;
        }
        b[0]=1;
        for(int i=1; i<n; i++)
        {
            b[i]=0;
        }
        int bum=1;
        while(bum!=s)
        {
            bum=0;
            for(int i=n-1; i>=0; i--)
            {
                if(b[i]<9)
                {
                    b[i]++;
                    break;
                }
            }
            for(int i=0; i<n; i++)bum=bum+b[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<b[i];
        }
        cout<<" ";
        int sum=9*n;
        while(sum!=s)
        {
            sum=0;
            for(int i=n-1; i>=0; i--)
            {
                if(a[i]>0)
                {
                    a[i]--;
                    break;
                }
            }
            for(int i=0; i<n; i++)sum=sum+a[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
