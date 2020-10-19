#include <stdio.h>
int main()
{
    int m[5][5];
    int i,j,a,b,c=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]==1){
                 a=i,b=j;
            }
        }
    }
    if(a>2){
        c=a-2;
    }
    else if(a<2){
        c=2-a;
    }
    if(b>2){
        c=c+b-2;
    }
    else if(b<2){
        c=c+2-b;
    }
    printf("%d",c);
    return 0;
}

