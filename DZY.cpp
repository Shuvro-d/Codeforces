#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    string s;
    int k,x;
    cin >> s;
    cin >> k;
    vector<int>v;
    for (int i = 0; i < 26; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    int mx = *max_element(v.begin(), v.end());
    ll sum= 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum = sum + v[s[i] - 'a'] * (i + 1);
    }
    int j = s.length() + 1;
    while (k--)
    {
        sum= sum + j * mx;
        j++;
    }
    cout << sum<<endl;
    return 0;
}
