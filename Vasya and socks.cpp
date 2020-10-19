#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int day=n,i;
    for(i=1;i<=day;i++){
        if(i%m==0)day++;
    }
    printf("%d",day);
    return 0;
}
