#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[2*n],arr[2*n];
    int i,j,a[n],b[n];
    int sum=0,sum_1=0;
    int x;
    for(i=0; i<2*n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0,j=0; i<2*n; i=i+2,j++)
    {
        a[j]=ara[i];
    }
    for(i=1,j=0; i<2*n; i=i+2,j++)
    {
        b[j]=ara[i];
    }
    for(i=0; i<n; i++)
    {
        arr[i]=a[i];
    }
    for(i=n,j=0; i<2*n; i++,j++)
    {
        arr[i]=b[j];
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    for(i=n; i<2*n; i++)
    {
        sum_1=sum_1+arr[i];
    }
    if(sum==sum_1)
    {
        for(i=0; i<2*n; i++)
        {
            for(j=i+1; j<2*n; j++)
            {
                if(arr[i]>arr[j])
                {
                    x=arr[i];
                    arr[i]=arr[j];
                    arr[j]=x;
                }
            }
        }
        sum=0;
        sum_1=0;
        for(i=0; i<n; i++)
        {
            sum=sum+arr[i];
        }
        for(i=n; i<2*n; i++)
        {
            sum_1=sum_1+arr[i];
        }
        if(sum==sum_1)
        {
            printf("-1\n");
        }
        else
        {
            for(i=0; i<2*n; i++)
            {
                printf("%d ",arr[i]);
            }
        }
        return 0;
    }
    else
    {
        for(i=0; i<2*n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
