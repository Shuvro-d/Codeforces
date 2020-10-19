#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, x;
	cin>>n;
	if(n%2==0) x=4;
	else x=9;
	cout<<x<<' '<<n-x<<endl;
	return 0;
}
