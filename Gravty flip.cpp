#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],x,i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for (i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if (a[i]>a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


