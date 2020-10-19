#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],i,p;
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    c[0]=b[0];
    for(i=1;i<n;i++){
        c[i]=((c[i-1]+b[i])-a[i]);
    }
    p=c[0];
    for(i=1;i<n;i++){
        if(c[i]>p){
            p=c[i];
        }
    }
    printf("%d",p);
    return 0;
}

