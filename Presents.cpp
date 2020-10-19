#include<stdio.h>
int main ()
{
    int n,i;

    scanf("%d", &n);
     int p[n],a[n];
   for (i=1;i<=n;i++) {
    scanf("%d", &p[i]);
   }
   for (i=1;i<=n;i++) {
    a[p[i]]=i;
   }
   for (i=1;i<=n;i++) {
    printf("%d ", a[i]);
   }
}

