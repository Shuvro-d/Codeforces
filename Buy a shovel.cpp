#include<bits/stdc++.h>

using namespace std;
int main()
{
   int k,r;
   cin>>k>>r;
   int i,j;
   for(i=1;i<1000;i++){
    if((k*i)%10==r){
   break;
    }
   }
for(j=1;j<1000;j++){
    if((k*j)%10==0){
   break;
    }
   }
   if(i<j){
    cout<<i<<endl;
   }
   else{
    cout<<j<<endl;
   }
   return 0;
}


