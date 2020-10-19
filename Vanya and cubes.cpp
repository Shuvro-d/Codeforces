#include <stdio.h>
int main()
{
    int n,i,x,count=0,sum=0;
    scanf("%d",&n);
    x=1;
    while(1){
       for(i=1;i<=x;i++){
            sum=sum+i;
       }
       x++;
       if(sum>n)
        break;
       else
        count++;
    }
    printf("%d\n",count);
    return 0;
}

