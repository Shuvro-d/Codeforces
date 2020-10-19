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
   ll n,l;
   cin>>n>>l;
   ll ara[n];
   for(i=0;i<n;i++){
    cin>>ara[i];
   }
   sort(ara,ara+n);
   ll m1,m2,m;
   if((ara[0]==0) && (ara[n-1]==l)){
     m=ara[1]-ara[0];
     for(i=1;i<n-1;i++){
        if((ara[i+1]-ara[i])>m){
            m=ara[i+1]-ara[i];
        }
     }
   }
   else if((ara[0]!=0) && (ara[n-1])==l){
    m=ara[0]*2;
    for(i=0;i<n-1;i++){
        if((ara[i+1]-ara[i])>m){
            m=ara[i+1]-ara[i];
        }
    }
   }
    else if((ara[0]==0) && (ara[n-1])!=l){
        m=(l-ara[n-1])*2;
        for(i=0;i<n-1;i++){
        if((ara[i+1]-ara[i])>m){
            m=ara[i+1]-ara[i];
        }
    }
    }
    else{
        m1=ara[0]*2;
        m2=(l-ara[n-1])*2;
        m=max(m1,m2);
         for(i=0;i<n-1;i++){
        if((ara[i+1]-ara[i])>m){
            m=ara[i+1]-ara[i];
        }
    }
    }
   if(m%2==0)cout<<m/2<<endl;
   else cout<<m/2<<".5"<<endl;
    return 0;
}
