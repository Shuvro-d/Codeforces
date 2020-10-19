/*Alien Vampire*/

#include<bits/stdc++.h>
#define        ls    long long signed
#define        ll     long long int
#define        fr   for (int i=2; i <= 7; i++)
#define        pf    printf
#define        dl     double
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,i;
        cin>>k;
        char ara[k];
        cin>>ara;
       int cnt=0,x=0;
       for(i=0;i<100;i++){
       for(i=0;i<k;i++){
        if(ara[i]=='A' && ara[i+1]=='P'){
            x++;
        }
       }
       if(x>0){
        for(i=k-1;i>=0;i--){
        if(ara[i]=='P' && ara[i-1]=='A'){
            ara[i]='A';
        }
       }
       cnt++;
       x=0;
       }
       else{
        break;
       }
       }
       cout<<cnt<<endl;
    }
    return 0;
}
