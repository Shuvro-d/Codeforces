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
        vector<int>a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int alice=0;
        int bob=0;
        int a_sum=0;
        int b_sum=0;
        int moves=1;
        while(a.begin()!=a.end())
        {
            vector<int>b;
            if(moves%2==0)
            {
                int j=a.size()-1;
                b_sum=0;
                while(1)
                {
                    b_sum=b_sum+a[j];
                    a[j]=0;
                    j--;
                    if(b_sum>a_sum || j<0)
                    {
                        break;
                    }
                }
                bob=bob+b_sum;
            }
            else
            {
                int i=0;
                a_sum=0;
                while(1)
                {
                    a_sum=a_sum+a[i];
                    a[i]=0;
                    i++;
                    if(a_sum>b_sum || i>a.size())
                    {
                        break;
                    }
                }
                alice=alice+a_sum;
            }
            for(int k=0; k<a.size(); k++)
            {
                if(a[k]!=0)
                    b.push_back(a[k]);
            }
            a=b;
            moves++;
        }
        cout <<moves-1<<" "<<alice<<" "<<bob<<endl;
    }
    return 0;
}
