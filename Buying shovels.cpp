#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<int>a;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i == 0)
            {
                if (n/i == i)
                    a.push_back(i);

                else {
                    a.push_back(i);
                    a.push_back(n/i);
                }
            }
        }
        sort(a.begin(),a.end());
       reverse(a.begin(),a.end());
       for(int i=0;i<a.size();i++){
       if(a[i]<=k){
        cout<<n/a[i]<<endl;
        break;
       }
    }
    }
    return 0;
}
