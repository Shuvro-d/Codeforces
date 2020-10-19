#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;

int main()
{
    ll  n ;
    cin>>n;
     ll number_of_digits = 0;
    for (ll i = 1; i <= n; i *= 10)
        number_of_digits += (n - i + 1);
    cout << number_of_digits << endl;
    return 0;
}
