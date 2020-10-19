#include<stdio.h>
int main()
{
    int ara[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%d",&ara[i]);
    }
    int max=ara[0],min=ara[0];
    for(i=0;i<3;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    for(i=0;i<3;i++){
        if(ara[i]<min){
            min=ara[i];
        }
    }
    printf("%d\n",max-min);
    return 0;
}

