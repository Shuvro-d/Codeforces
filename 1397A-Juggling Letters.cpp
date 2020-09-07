#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[26];
        for(int k=0;k<26;k++){
            a[k]=0;
        }
        for(int l=0;l<n;l++)
        {
            string s;
            cin>>s;
            for(int i=0; i<s.length(); i++)
            {
                int x=s[i]-97;
                a[x]++;
            }
        }
       bool flag=true;
       for(int i=0;i<26;i++){
        if(a[i]>0 && a[i]%n!=0)flag=false;
       }
       if(flag)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}

