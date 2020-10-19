#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a=3;
        int b=5;
        int c=7;
        int x,y,z,i;
        i=min(a,min(b,c));
        i=n/i;
        bool s=false;
        for(x=i; x>=0; x--)
        {
            for(y=0; y<=i; y++)
            {
                z=abs((n-(a*x+b*y))/c);
                if((a*x+b*y+c*z)==n)
                {
                    if(x>=0 and y>=0 and z>=0){
                        s=true;
                        break;
                    }
                }
            }
            if(s)break;
        }
        if(s)cout<<x<<" "<<y<<" "<<z<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
