#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
   int n;
   cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int time=n+a[0];
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
        time++;
    }
    else if(a[i]>a[i+1]){
        time=time+(a[i]-a[i+1])+1;
    }
    else{
        time=time+(a[i+1]-a[i])+1;
    }
  }
  cout<<time<<endl;
   return 0;
}
