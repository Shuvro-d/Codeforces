#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,max=0,min=101,max_1,min_1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_1=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            min_1=i;
        }
    }
    n=n-1;
    if(max_1>min_1){
        min_1++;
    }
    printf("%d\n",max_1+(n-min_1));
    return 0;
}

