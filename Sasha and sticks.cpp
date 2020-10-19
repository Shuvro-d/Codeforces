#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int n,k,p;
    cin>>n>>k;
    p=n/k;
    if(p%2==0)cout<<"No"<<endl;    //// we can also use here bitwise operation
    else cout<<"YES"<<endl;        ////puts((n / k) & 1 ? “YES” : “NO”);
    return 0;
}

