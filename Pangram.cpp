#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    while(scanf("%d", &n)==1){
        char ara[n];
    scanf("%s",ara);
    int length=strlen(ara),i,j,count=0;
    for (i=0;i<length;i++) {
        if (ara[i]>='a' && ara[i]<='z') {
            ara[i]=ara[i]-32;
        }
    }
    for (i=0;i<length;i++) {
        for (j=i+1;j<length;j++) {
            if (ara[i]==ara[j]) {
                count++;
                break;
            }
        }
    }
    if ((n-count)==26) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    }
    return 0;
}


