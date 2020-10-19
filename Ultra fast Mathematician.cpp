#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char  a[101],b[101];
    scanf("%[10] %[10]", a, b);

    int len_1=strlen(a);
    int len_2=strlen(b);


    char ara[len_1];
    for (i=0,j=0;i<len_1,j<len_2;i++,j++) {
        if (a[i]==b[j]) {
            ara[i]='0';
        }
        else {
            ara[i]='1';
        }
    }

   for (i=0;i<len_1;i++) {
    printf("%c", ara[i]);
   }
    return 0;


}

