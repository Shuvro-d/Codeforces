#include<stdio.h>
int main()
{
    int k,n,w;
    while(scanf("%d %d %d",&k,&n,&w)==3){
    int i,sum=0;
    for(i=1;i<=w;i++)
    {
        sum=sum+(k*i);
    }
    if(sum>n){
        printf("%d",sum-n);
    }
    else{
        printf("0\n");
    }
    }
    return 0;
}


