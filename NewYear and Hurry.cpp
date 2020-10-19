/*KnocK KnocK*/
/**SHUVRO**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int time,i;
  time=240-k;
  int ara[n];
  for(i=0;i<n;i++){
    ara[i]=5*(i+1);
  }
  int sum=0;
  int cnt=0;
  for(i=0;i<n;i++){
    sum=sum+ara[i];
    if(sum<=time){
        cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}

