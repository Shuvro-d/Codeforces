#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll  i,j;
ll binary_search(ll a[],ll n,ll x)
{
    ll left=0,right=n-1;
    ll mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
     return -1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll num=0;
        ll ara[100001];
        ara[0]=2;
        ll cnt=0;
        ll q;
        if(n<2){
            q=0;
        }
        else{
            q=100;
        }
        for(i=1; i<100001; i++)
        {
            cnt++;
            j=i*3+2;
            ara[i]=ara[i-1]+j;
            if(ara[i]>n)break;
        }
        sort(ara,ara+(cnt+1));
        /*for(i=0;i<=cnt;i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;*/
        //cout<<ara[cnt]<<endl;
        ll rem=n-ara[cnt-1];
        //cout<<rem<<endl;
        ll z=binary_search(ara,(cnt+1),n);
        if(z!=-1){
            num=1;
            n=0;
        }
        else{
            num=1;
            n=rem;
        }
        ll x=0;
        while(n>0){
            z=binary_search(ara,(cnt+1),n);
            /*if(n==2){
                num++;
                n=n-2;
            }*/
            if(n==1 || n==0){
                break;
            }
            if(z!=-1){
                num++;
                n=x;
                x=0;
            }
            else{
               n--;
               x++;
            }
        }
        if(q==0)num=0;
        cout<<num<<endl;
    }
    return 0;
}
