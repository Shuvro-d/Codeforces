#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    if(sum%5==0 and  sum!=0)cout<<sum/5<<endl;
    else cout<<-1<<endl;
    return 0;
}
