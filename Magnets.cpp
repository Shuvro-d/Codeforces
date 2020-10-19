#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n],i,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        if(ara[i]==ara[i+1]){
            continue;
        }
        else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

