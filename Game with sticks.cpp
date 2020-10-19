#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    n=min(n,m);
    if(n%2==0){
        printf("Malvika\n");
    }
    else{
        printf("Akshat\n");
    }
    return 0;
}
