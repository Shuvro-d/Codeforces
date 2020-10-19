#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char s[n];
   scanf("%s",s);
   int length,i,count=0;
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",count);
    return 0;
}

