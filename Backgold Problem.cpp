#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n;
   cin>>n;
  int i,k;
  k=n/2;
  cout<<k<<endl;
  if(n%2==0){
    for(i=0;i<k;i++){
        cout<<2<<" ";
    }
  }
  if(n%2==1){
    for(i=0;i<k-1;i++){
        cout<<2<<" ";
    }
    cout<<3<<endl;
  }
   return 0;
}


