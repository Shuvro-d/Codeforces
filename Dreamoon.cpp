#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int count;
    if(n<m){
        printf("-1\n");
        return 0;
    }
    else{
         if(n%m==0){
        count=n/2;
        }
    else{
        count=(n/2)+1;
        }
    }
   while(1){
        if(count%m==0){
            printf("%d\n",count);
            break;
        }
        else{
            count++;
        }
    }
    return 0;
}

