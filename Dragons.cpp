/*KnocK KnocK*/
/**SHUVRO**/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,n,i,cnt=0,a[1000],b[1000],j;
    cin>>s>>n;
    for(i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0; i<n; i++){
        if(s>a[i]){
            cnt++;
        }
        s=s+b[i];
    }
    if(cnt==n){
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


