#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    while(scanf("%s %s",&a,&b)==2)
    {
        int length1=strlen(a),length2=strlen(b);
    int i,j;
    for(i=0,j=0;i<length1,j<length2;i++,j++)
    {
       if (a[i]>='a' && a[i]<='z') {
            a[i]='A'+(a[i]-'a');
        }
        if (b[j]>='a' && b[j]<='z') {
            b[j]='A'+(b[i]-'a');
        }
    }
    int sum1=0,sum2=0;
    for(i=0,j=0;i<length1,j<length2;i++,j++)
    {
       if(strcmp(a,b)==0) {
            printf("0");
            break;
        }
        if (strcmp(a,b)<=0) {
            printf("-1");
            break;
        }
        if (strcmp(a,b)>=0) {
            printf("1");
            break;
        }
    }
    }

    return 0;
}


