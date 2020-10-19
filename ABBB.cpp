#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char>a;
        for(ll i=0;i<s.size();i++){
            a.push_back(s[i]);
        }
        bool flag=false;
        while(flag==false){
            vector<char>b;
            flag=true;
              for(ll i=0;i<a.size()-1;i++){
                if(a[i]=='A' and a[i+1]=='B'){
                    ll x=i,y=i+1;
                    flag=false;
                    while(a[x]=='A' and a[y]=='B'){
                        a[x]='C';a[y]='C';
                        x--;y++;
                        if(x<0 or y>=a.size())break;
                    }
                    i=y;
                }
            }
            for(ll i=0;i<a.size();i++){
                if(a[i]!='C')b.push_back(a[i]);
            }
            if(b.begin()==b.end()){
                a=b;
                flag=true;
            }
            a=b;
        }
        if(a.begin()==a.end())cout<<0<<endl;
        else{
            flag=false;
            while(flag==false){
            vector<char>b;
            flag=true;
             for(ll i=0;i<a.size()-1;i++){
                if(a[i]=='B' and a[i+1]=='B'){
                    a[i]='C';
                    a[i+1]='C';
                    flag=false;
                }
            }
            for(ll i=0;i<a.size();i++){
                if(a[i]!='C')b.push_back(a[i]);
            }
            if(b.begin()==b.end()){
                a=b;flag=true;
            }
            a=b;
        }
        cout<<a.size()<<endl;
        }
    }
    return 0;
}
