#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='2';
            flag=false;
            break;
        }
    }
    if(flag){
       s[0]='2';
    }
     for(int i=0;i<s.size();i++){
            if(s[i]!='2')cout<<s[i];
        }
    return 0;
}
