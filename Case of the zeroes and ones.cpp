#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,one=0,zero=0;
    cin>>a;
    char b[a],i;
    while(a--){
    cin>>b[i];
    if(b[i]=='1'){
        one++;
    }
    else{
        zero++;
    }
    }
    if(one>zero){
        cout<<one-zero<<endl;
    }
    else{
        cout<<zero-one<<endl;
    }
    return 0;
}

