#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100];
    int n,i;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%s", s);
     int length=strlen(s);
    if(length<=10) {
        printf("%s\n", s);
    }
    else {
        printf("%c",s[0]);
        printf("%d",length-2);
        printf("%c\n",s[length-1]);
    }
    }
return 0;
}

