#include<stdio.h>
int main()
{
    int n,h,i;
    scanf("%d %d",&n,&h);
    int ara[n],count=0;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        if(ara[i]>h){
            count=count+2;
        }
        else if(ara[i]<=h){
            count=count+1;
        }
    }
    printf("%d\n",count);
    return 0;
}

