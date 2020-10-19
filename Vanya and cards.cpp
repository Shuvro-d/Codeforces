/*KnocK KnocK*/
/**SHUVRO**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,x;
   cin>>n>>x;
   int ara[n],i;
    int num;
   for(i=0;i<n;i++){
    cin>>ara[i];
   }
   int sum=0;
   for(i=0;i<n;i++){
    sum=sum+ara[i];
   }
   if(sum==0){
        num=sum;
    cout<<num<<endl;
    return 0;
   }

   if(sum<0){
      sum=sum*(-1);
      if(sum<x){
        num=1;
      }
      else{
        num=sum/x;
        if(sum%x!=0){
            num++;
        }
      }
   }
   else{
    if(sum<x){
        num=1;
      }
      else{
        num=sum/x;
        if(sum%x!=0){
            num++;
        }
      }
   }
   cout<<num<<endl;
    return 0;
}

