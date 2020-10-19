
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x,y,m,n;
    if(a<b){
        m=a;
        n=b;
    }
    else{
        m=b;
        n=a;
    }
    x=m;
    if((n-m)>=2){
        y=(n-m)/2;
    }
    else{
        y=0;
    }
    printf("%d %d\n",x,y);
    return 0;
}
