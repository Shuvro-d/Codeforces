#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int ara[n],arr[n],count=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&ara[i],&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ara[i]==arr[j]){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
