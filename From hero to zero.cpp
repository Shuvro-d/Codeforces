/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,r=0;
		cin>>n>>k;
		while(n>0){
        if(n%k==0){
		n=n/k;
		r++;
	}
	    else{
			r = r+ (n%k);
			n= n-(n%k);
		}
	}
	    cout<<r<<endl;
	}

	return 0;
}
