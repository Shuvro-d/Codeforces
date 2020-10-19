#include<stdio.h>
#include<math.h>
int main()
{
    int n,minimum_index,minimum,sum=0,count=0,count_1=0;
    scanf("%d",&n);
    int ara[n],ara_2[n];
    int i,j;
    for(i=0;i<n;i++)
    {
         scanf("%d",&ara[i]);
         sum=sum+ara[i];
    }
    sum=ceil(sum*1.0)/2;
     for(i=0;i<n;i++)
    {
        minimum=10000;
        for(j=0;j<n;j++)
        {
            if(ara[j]<minimum)
            {
                minimum=ara[j];
                minimum_index=j;
            }
        }
        ara_2[i]=minimum;
        ara[minimum_index]=10000;
    }
    for(i=n-1;i>=0;i--)
    {
        count_1++;
        count=count+ara_2[i];
        if(count>sum)
        {
            printf("%d",count_1);
            break;
        }
    }
    return 0;
}
