#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,a,b;
    cin>>n>>a>>b;
    int rx,fx;
    rx=n-a-1;
    if(rx>b){
        fx=b+1;
    }else{
        fx=rx+1;
    }
    cout<<fx;
  return 0;
}

