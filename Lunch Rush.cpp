#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
ll i,j;
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll f,t,m_joy=-1000000000,p_joy;
    while(n--){
        cin>>f>>t;
        if(t>k){
            p_joy=f-(t-k);
        }else{
            p_joy=f;
        }
        m_joy=max(m_joy,p_joy);
    }
    cout<<m_joy<<endl;
    return 0;
}
