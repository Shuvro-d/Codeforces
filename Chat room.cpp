#include<stdio.h>
#include<string.h>
int main ()
{
    char a[101];
    char s[5]="hello";
    int i,j=0,count=0;
    scanf("%s", a);
    for (i=0; i<strlen(a); i++)
    {
        if (a[i]==s[j])
        {
            j++;
            count++;
            if (count==5)
            {
                break;
            }
        }
    }
    if (count==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


