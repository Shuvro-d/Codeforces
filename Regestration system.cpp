#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector< pair<string,int> >a;
    vector< pair<string,int> >::iterator it;
    while(n--){
        string s;
        cin>>s;
        int m=-1;
        for(it=a.begin();it!=a.end();it++){
            if(it->first==s){
                cout<<it->first<<it->second+1<<endl;
                string s=it->first;
                int x=it->second;
                x++;
                it->second=x;
                m=1;
                break;
            }
        }
        if(m==-1){
                cout<<"OK"<<endl;
                a.push_back(make_pair(s,0));
        }
    }
    return 0;
}

