#include<bits/stdc++.h>
#define        ll     long long int
/*FALTU*/
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int ara[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 and j==0 or i==n-1 and j==n-1)
                {
                    char x;
                    cin>>x;
                    ara[i][j]=11;
                }
                else
                    scanf("%1d",&ara[i][j]);
            }
        }
        int aa,bb;
        int cc,dd;
        int xx,yy;
        aa=ara[0][1];
        bb=ara[1][0];
        cc=ara[n-2][n-1];
        dd=ara[n-1][n-2];
        xx=n-1+1;
        yy=n-2+1;
        if(aa==0 and bb==0)
        {
            if(cc==0 and dd==0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(cc==0 and dd==1)
            {
                cout<<1<<endl;
                cout<<yy <<" "<<xx<<endl;
            }
            else if(cc==1 and dd==0)
            {
                cout<<1<<endl;
                cout<<xx <<" "<<yy<<endl;
            }
            else if(cc==1 and dd==1)
            {
                cout<<0<<endl;
            }
        }
        else if(aa==0 and bb==1)
        {
            if(cc==0 and dd==0)
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else if(cc==0 and dd==1)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<xx <<" "<<yy<<endl;
            }
            else if(cc==1 and dd==0)
            {
                cout<<2<<endl;
                cout<<2<<" "<<1<<endl;
                cout<<xx <<" "<<yy<<endl;
            }
            else if(cc==1 and dd==1)
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
        }
        else if(aa==1 and bb==0)
        {
            if(cc==0 and dd==0)
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(cc==0 and dd==1)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<yy <<" "<<xx<<endl;
            }
            else if(cc==1 and dd==0)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<xx <<" "<<yy<<endl;
            }
            else if(cc==1 and dd==1)
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
        }
        else if(aa==1 and bb==1)
        {
            if(cc==0 and dd==0)
            {
                cout<<0<<endl;
            }
            else if(cc==0 and dd==1)
            {
                cout<<1<<endl;
                cout<<xx <<" "<<yy<<endl;
            }
            else if(cc==1 and dd==0)
            {
                cout<<1<<endl;
                cout<<yy <<" "<<xx<<endl;
            }
            else if(cc==1 and dd==1)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
        }
    }
    return 0;
}
