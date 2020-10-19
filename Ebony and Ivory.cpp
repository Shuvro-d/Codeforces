#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int i=min(a,b);
    int p=0;
    i=n/i;
    bool flag=false;
    for(int x=i;x>=0;x--){
        int y=abs((n-(a*x))/b);
        if(((a*x)+(b*y))==n){
            flag=true;
            break;
        }
    }
    if(!flag)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
