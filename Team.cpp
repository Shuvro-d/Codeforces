#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n][3],i,j,count=0,count1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]==1)
            {
                count++;
            }
        }
        if(count>=2)
        {
            count1++;
        }
        count=0;
    }

    printf("%d\n",count1);
    return 0;
}



