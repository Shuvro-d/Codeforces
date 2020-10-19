#include <stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    char ara[4];
    for(i=0;i<n;i++){
        scanf("%s",ara);
        if((ara[0]=='+' &&  ara[1]=='+') || (ara[1]=='+' &&  ara[2]=='+')) {
            x++;
        }
        else if((ara[0]=='-' &&  ara[1]=='-') || (ara[1]=='-' &&  ara[2]=='-')) {
            x--;
        }
    }
    printf("%d",x);
    return 0;
}

