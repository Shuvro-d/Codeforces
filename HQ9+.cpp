#include<stdio.h>
#include<string.h>
int main ()
{
    int i,count=0;
    char a[100];
    scanf("%s",a);
    for (i=0;i<strlen(a);i++) {
         if (a[i]=='H' || a[i]=='Q' || a[i]=='9') {
            printf("YES\n");
            count++;
            break;
         }

    }
    if (count==0) {
        printf("NO\n");
    }
}

