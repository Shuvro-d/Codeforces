#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n,a,b;
   cin>>n>>a>>b;
   int i,j;
   if(b==0){
    cout<<a<<endl;
   }
  else if(b>0){
    int ara[b];
   for(i=a+1,j=0;j<b;i++,j++){
    if(i>n)i=1;
    ara[j]=i;
   }
   cout<<ara[b-1]<<endl;
   }
   else if(b<0){
        b=b*-1;
     int ara[b];
   for(i=a-1,j=0;j<b;i--,j++){
    if(i<1)i=n;
    ara[j]=i;
   }
   cout<<ara[b-1]<<endl;
   }
   return 0;
}


