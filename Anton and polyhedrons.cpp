#include<stdio.h>
int main()
{
    int n,i,len1,len2,len3,len4,sum=0;
    char s[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        if(s[0]=='I')
        sum=sum+20;
        else if(s[0]=='O')
        sum=sum+8;
        else if(s[0]=='T')
         sum=sum+4;
        else if(s[0]=='D')
        sum=sum+12;
        else
        sum=sum+6;
    }
    printf("%d\n",sum);
    return 0;
}

