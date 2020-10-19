#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n;
   cin>>n;
  int i,j,rx=1,rm=1,mx=1,nx=1;
  if(n==1){
    cout<<1;
  }
  else{
     for(i=1;i<n;i++){
    rx=rx+2;
    rm=rm+rx;
  }
  for(i=1;i<n-1;i++){
    nx=nx+2;
    mx=mx+nx;
  }
  cout<<mx+rm<<endl;
  }

   return 0;
}


