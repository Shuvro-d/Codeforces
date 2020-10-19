#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<char>b;
        if(a.length()%2==0)
        {
            for(int i=0; i<a.length()-1; i=i+2)
            {
                b.push_back(a[i]);
            }
             b.push_back(a[a.length()-1]);
        }
        else
        {
            for(int i=0; i<a.length()-1; i=i+2)
            {
                b.push_back(a[i]);
            }

        }
        for(int i=0; i<b.size(); i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }
    return 0;
}
