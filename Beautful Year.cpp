#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        ld    long double
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
    ll n,x,y,z,cnt=0;
    ll ara[4];
    cin>>n;
    n=n+1;
    int i=0,j=0;
   while(1)
    {
       i=0;
        cnt=0;

        x=n%1000;
        y=x%100;
        z=y%10;
        ara[0]=z;
        ara[1]=y/10;
        ara[2]=x/100;
        ara[3]=n/1000;
       while(i<4)
        {
            j=0;
           while(j<4)
           {
               if(i==j)
               {
                   j++;

                   }

               else if(ara[i]==ara[j])
               {
                cnt++;

                j++;

                   }
                else j++;
               }
          i++;

        }
        if(cnt==0)
        {
            cout<<n<<endl;
            break;
        }
        else{
            n++;
        }
    }
    return 0;
}
