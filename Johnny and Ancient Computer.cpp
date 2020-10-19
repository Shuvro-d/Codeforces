#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll mx=max(a,b);
        ll mn=min(a,b);
        ll cont;
        if(a==b)
        {
            cont=0;
        }
        else
        {
            if(mx%mn==0)
            {
                ll divisor=mx/mn;
                cont=0;
                while(divisor>1)
                {
                    if(divisor%8==0)
                    {
                        divisor=divisor/8;
                        cont++;
                    }
                    else if(divisor%4==0)
                    {
                        divisor=divisor/4;
                        cont++;
                    }
                    else if(divisor%2==0)
                    {
                        divisor=divisor/2;
                        cont++;
                    }
                    else
                    {
                        cont=-1;
                        break;
                    }
                }
            }
            else
            {
                cont=-1;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}



