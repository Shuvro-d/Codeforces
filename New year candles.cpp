#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x=a;
    int p=0;
    while(1)
    {
        p=0;
        if(a>=b){
            p=a%b;
        }
        a=a/b;
        x=x+a;
        if(a==0)
            break;
        a=(a+p);
    }
    printf("%d",x);
}

