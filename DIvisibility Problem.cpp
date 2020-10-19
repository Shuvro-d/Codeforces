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
    ll t;
    cin>>t;
    while(t--){
     ll a,b;
    cin >> a >> b;
		if (a % b == 0) cout << 0 << endl;
		else cout << b - a % b << endl;
    }
    return 0;
}
