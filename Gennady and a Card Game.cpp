/*Shuvro Das*/

#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
#define    stack_max   100
using namespace std;
int main()
{
    char s[2];
    cin>>s;
    char d[5][2];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            cin>>d[i][j];
        }
    }
    int sum=0;
    for(i=0;i<5;i++){
        if(s[0]==d[i][0]  || s[1]==d[i][1])sum++;
    }
    if(sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
