#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
bool isPalindrome(string s)
{
    int l = 0;
    int h = s.size()- 1;
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    string s;
    cin>>s;
    if(isPalindrome(s))cout<<0<<endl;
    else
    {
        cout << 3 << endl;
        cout << "L 2" << endl;
        cout << "R 2" << endl;
        cout << "R " << 2*s.size()-1 << endl;
    }
    return 0;
}
