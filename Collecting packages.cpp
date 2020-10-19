#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
void insertion_sort_ascending(vector<int>&a,int n,vector<int>&b)
{
    int item1,item2;
    for(i=1; i<n; i++)
    {
        item1=a[i];
        item2=b[i];
        j=i-1;
        while(j>=0 && a[j]>item1)
        {
            a[j+1]=a[j];
            b[j+1]=b[j];
            j=j-1;
        }
        a[j+1]=item1;
        b[j+1]=item2;
    }
}


void completesort(vector<int>&a,int n,vector<int>&b)
{
    int cnt=1,s=0,e=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            cnt++;
        }
        else
        {
            e=e+cnt;
            if(e>n)
                e=n;
            sort(b.begin()+s,b.begin()+e);
            // cout<<"s="<<s<<" "<<"e="<<e<<endl;
            //for(j=0;j<n;j++)cout<<b[j]<<endl;
            //cout<<endl;
            s=s+cnt;
            cnt=1;
        }
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>x;
        vector<int>y;
        int p,q;
        for(i=0; i<n; i++)
        {
            cin>>p>>q;
            x.push_back(p);
            y.push_back(q);
        }
        insertion_sort_ascending(x,n,y);
        completesort(x,n,y);
        /*cout<<endl;
        for(i=0;i<n;i++){
         cout<<x[i]<<" "<<y[i]<<endl;
        }
        cout<<endl;*/
        vector<char>path;
        vector<char>::iterator it;
        char tile;
        int brk=1;
        int xstrt=0,ystrt=0;
        for(i=0; i<n; i++)
        {
            if(ystrt>y[i]){
                brk=0;
                break;
            }
            for(j=xstrt; j<x[i]; j++)
            {
                tile='R';
                path.push_back(tile);
            }
            xstrt=x[i];
            for(j=ystrt; j<y[i]; j++)
            {
                tile='U';
                path.push_back(tile);
            }
            ystrt=y[i];
        }
        if(brk==1)
        {
            cout<<"YES"<<endl;
            for(it=path.begin(); it!=path.end(); it++)
            {
                cout<<*it;
            }
           cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
