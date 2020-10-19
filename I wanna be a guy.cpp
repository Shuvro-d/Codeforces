#include<stdio.h>
int main()
{
    int n,p,p_1;
    int i,j,count=0;
    scanf("%d %d",&n,&p);
    int ara[p];
    for(i=0;i<p;i++)
    {
       scanf("%d",&ara[i]);
    }
    scanf("%d",&p_1);
    int ara_1[p_1];
    for(i=0;i<p_1;i++)
    {
        scanf("%d",&ara_1[i]);
    }
    int ara_main[p+p_1];
    for(i=0;i<p+p_1;i++)
    {
        if(i<p)
        {
            ara_main[i]=ara[i];
        }
        else
        {
            ara_main[i]=ara_1[i-p];
        }
    }
    for(i=0;i<p+p_1;i++)
    {
        for(j=i+1;j<p+p_1;j++)
        {
            if(ara_main[i]==ara_main[j])
            {
              ara_main[j]=0;
            }
        }
        if(ara_main[i] != 0)
        {
            count++;
        }
    }
    if(n==count)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}

