#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,d,x,i,z,count=0;
        cin>>n>>d;
        if(d<=n){
        cout<<"YES"<<endl;
        }
        else{
            for(i=1;i<n;i++){
                 z=ceil(d*1.0/(i+1));
                x=i+z;
                if(x<=n){
                    cout<<"yes"<<endl;
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                  cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}
