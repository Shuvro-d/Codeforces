#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
    {
       long long int a,b,c,r,time,path;
        cin>>a>>b>>c>>r;
        if(a>b)
        {
            swap(a,b);
        }
        if(a<0 && b<0)
        {
            swap(a,b);
            a=-(a);
            b=-(b);
            c=-(c);
        }
        if(a<0 && b>0)
        {
            b=b+(-a);
            c=c+(-a);
            a=0;
        }
        if (c<a)
        {
            c=b+(a-c);
        }
        if(c==a || c==b)
        {
            path=b-a;
            time=path-r;
            if(time<0)
            {
                 time=0;
            }
        }
        if(c>b)
        {
            path=b-a;
            if((c-r)<b)
            {
                if((c-r)<=a){
                    time=0;
                }
                else
                {
                    time=path-(b-(c-r));
                }
            }
            else
            {
                time=path;
            }
        }
         if(c>a && c<b)
         {
             if((c+r)>=b && (c-r)<=a)
             {
                 time=0;
             }
             else if((c+r)<b && (c-r)>a)
             {
                 path=b-a;
                 time=path-(2*r);
             }
             else if((c+r)<b && (c-r)<=a)
             {
                 time=b-(c+r);
             }
             else
             {
                 time=(c-r)-a;
             }
         }
        cout<<time<<endl;
    }
    return 0;
}
