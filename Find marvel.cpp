#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
   int n,s,t;
   cin>>n>>s>>t;
   int cnt=0;
   int a[100001];
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   while(s!=t && a[s]!=0){
        int temp = a[s];
        a[s] = 0;
        s = temp;
        cnt++;
   }
    if(s==t)cout<<cnt<<endl;
    else cout<<-1<<endl;
   return 0;
}
