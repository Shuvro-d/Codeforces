#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n];
    for(i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }
    int count=0,countx=0;
    for(i=0;i<=n;i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            countx++;
        }
    }
    if(count>countx)
    {
        printf("Anton\n");
    }
    else if(countx>count)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}

