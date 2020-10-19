#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a,b;
    cin>>a>>b;
    int i,rx=1;
    for(i=1;i<=min(a,b);i++)
    {
            rx=rx*i;
    }
    cout<<rx<<endl;
    return 0;
}


