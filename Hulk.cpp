#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        if(i==n)
        {
            if(n%2==0)
            {
                printf("I love ");
            }
            else
            {
                printf("I hate ");
            }
            puts("it");
        }

        else
        {
            if(i%2!=0)
            {
                printf("I hate ");
            }
            else {
                printf("I love ");
            }
            printf("that ");
        }
    }
        return 0;
}


