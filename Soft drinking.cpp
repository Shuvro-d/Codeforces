#include<bits/stdc++.h>

using namespace std;
int main()
{
   int  n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink,slice,salt,result;
    drink=(k*l)/nl;
    slice=(c*d);
    salt=p/np;
    result=min(slice,salt);
    result=min(result,drink);
       result=result/n;
    cout<<result<<endl;
    return 0;
}
