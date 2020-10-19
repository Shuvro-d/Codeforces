#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],i,p;
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    int sum_1=0,sum_2=0,sum_3=0;
     for(i=0;i<n;i++){
        sum_1=sum_1+a[i];
        sum_2=sum_2+b[i];
        sum_3=sum_3+c[i];
    }
     if((sum_1==0)&&(sum_2==0)&&(sum_3==0)){
        printf("YES\n");
     }
     else{
        printf("NO");
     }
    return 0;
}

