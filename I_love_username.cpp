#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n,i,emra=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int moga=a[0],soga=a[0];
    for(i=0;i<n;i++){
        if(a[i]>moga){
            moga=a[i];
            emra++;
        }
        if(a[i]<soga){
           soga=a[i];
           emra++;
        }
    }
    cout<<emra<<endl;
    return 0;
}


