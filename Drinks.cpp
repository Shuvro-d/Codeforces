#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    double c,b=0.000000000000;
    for (i=1;i<=n;i++) {
        scanf("%d", &a[i]);
    }
    for (i=1;i<=n;i++) {
        b=b+a[i];
    }
    c=b/n;
    printf("%0.12lf", c);
}

