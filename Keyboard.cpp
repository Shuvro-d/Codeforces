
#include <stdio.h>
#include<string.h>
int main()
{
    char s;
    scanf("%c",&s);
    char ara[101];
    scanf("%s",ara);
    char ara1[]= {'q','w','e','r','t','y','u','i','o','p'};
    char ara2[]= {'a','s','d','f','g','h','j','k','l',';'};
    char ara3[]= {'z','x','c','v','b','n','m',',','.','/'};
    int i,j,length;
    length=strlen(ara);
    if(s=='L')
    {
        for(i=0; i<=strlen(ara); i++)
        {
            for(j=9; j>=0; j--)
            {
                if(ara[i]==ara1[j])
                {
                    ara[i]=ara1[j+1];
                }
                else if(ara[i]==ara2[j])
                {
                    ara[i]=ara2[j+1];
                }
                else if(ara[i]==ara3[j])
                {
                    ara[i]=ara3[j+1];
                }
            }
        }
    }
    else if(s=='R')
    {

        for(i=0; i<strlen(ara); i++)
        {
            for(j=0; j<10; j++)
            {
                if(ara[i]==ara1[j])
                {
                    ara[i]=ara1[j-1];
                }
                else if(ara[i]==ara2[j])
                {
                    ara[i]=ara2[j-1];
                }
                else if(ara[i]==ara3[j])
                {
                    ara[i]=ara3[j-1];
                }
            }
        }
    }
    printf("%s\n",ara);
    return 0;
}
