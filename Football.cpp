
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char s[100];
    gets(s);
    int length=strlen(s);
    for(i=0;i<length-6;i++)
    {
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
        {
            count++;
            break;
        }
        else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
        {
            count++;
            break;
        }
    }
    if(count>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
