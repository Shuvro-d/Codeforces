#include<bits/stdc++.h>

#define lol            long long int

using namespace std;

int main()
{
   lol n,k;
   cin>>n>>k;
  lol red=n*2,green=n*5,blue=n*8;
  lol r,g,b,num;
  r=red/k;
  g=green/k;
  b=blue/k;
  if(red%k!=0)r++;
  if(blue%k!=0)b++;
  if(green%k!=0)g++;
  num=r+g+b;
  cout<<num<<endl;
  return 0;
}

