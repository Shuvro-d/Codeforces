#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n],ara_1[n],count=0;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int max=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    for(i=0;i<n;i++){
        ara_1[i]=max;
    }
    for(i=0;i<n;i++){
        count=count+(ara_1[i]-ara[i]);
    }
    printf("%d\n",count);
    return 0;
}

