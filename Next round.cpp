#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ara[n],i,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        if((ara[i]>=ara[k-1])&&(ara[i]!=0)){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

