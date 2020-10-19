#include<bits/stdc++.h>

using namespace std;
int main()
{
   long long int n,m;
   cin>>n>>m;
   long long int rex=pow(2,n);
   long long int rox;
   rox=m%rex;
   cout<<rox<<endl;
   return 0;
}


