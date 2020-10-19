#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int rest(int a[],int n,char c)
{
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            c='r';
        }
        else if(a[i]==1 and c!='c')
        {
            x++;
            c='c';
        }
        else if(a[i]==2 and c!='g')
        {
            x++;
            c='g';
        }
        else if(a[i]==3)
        {
            if(c=='c')
            {
                x++;
                c='g';
            }
            else if(c=='g')
            {
                x++;
                c='c';
            }
            else if(c=='r')
            {
                int num=0;
                int topic;
                for(int j=i; j<n; j++)
                {
                    if(a[j]==3)num++;
                    else
                    {
                        topic=j;
                        break;
                    }
                }
                if(num%2==1 and a[topic]==1)
                {
                    c='g';
                    x++;
                }
                else if(num%2==1 and a[topic]==2)
                {
                    c='c';
                    x++;
                }
                else if(num%2==1 and a[topic]==0)
                {
                    c='c';
                    x++;
                }
                else if(num%2==0 and a[topic]==1)
                {
                    c='c';
                    x++;
                }
                else if(num%2==0 and a[topic]==2)
                {
                    c='g';
                    x++;
                }
                 else if(num%2==0 and a[topic]==0)
                {
                    c='g';
                    x++;
                }
            }
        }
        else
        {
            c='r';
        }
    }
    return n-x;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int m=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==3)m++;
    }
    if(m==n)cout<<0<<endl;
    else
        cout<<rest(a,n,'r')<<endl;
    return 0;
}
