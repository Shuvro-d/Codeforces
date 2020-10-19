#include<stdio.h>
#include<string.h>
int main ()
{
    int i,j,count=0,a,b,c,d,len;
    char s[1001];
    gets(s);
    len=strlen(s);
    if (len==2) {
        printf("0");
    }
    else {
    for (i=1;i<len-4;i=i+3) {
        for (j=i+3;j<len-1;j=j+3) {
            if (s[i]==s[j]) {
                count++;
                break;
            }
        }
    }


    a=len-2;
    b=a/3;
    c=b-count;
    d=c+1;
    printf("%d", d);
    }
}


