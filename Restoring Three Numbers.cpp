#include<bits/stdc++.h>

using namespace std;
int main()
{
   long long int ara[4],i;
   for(i=0;i<4;i++){
    cin>>ara[i];
   }
   int n=sizeof(ara)/sizeof(ara[0]);
   sort(ara,ara+n);//just sorted the array, taking largest as a+b+c
   int a,b,c;
   c=ara[3]-ara[0];//(a+b+c)-(a+b)
   b=ara[1]-c;//(a+b)-a
   a=ara[0]-b;//(a+c)-a
   cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

