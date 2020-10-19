#include<stdio.h>
int main()
{
    int m,n,o;
    while(scanf("%d %d",&m,&n)==2)
    {
        int i,j;
        for(i=1; i<=m; i++)
        {
            o=i/2;
            if((i%2==0)&&(o%2==0))
            {
                printf("#");
                for(j=2; j<=n; j++)
                {
                    printf(".");
                }
            }
            else if((i%2==0)&&(o%2==1))
            {
                for(j=1; j<n; j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else
            {
                for(j=1; j<=n; j++)
                {
                    printf("#");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

