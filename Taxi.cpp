#include <stdio.h>
int main()
{
    int n,a;
    int i,p=0,q=0,r=0,s=0,sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1){
            p++;
        }
        else if(a == 2){
            q++;
        }
        else if(a == 3){
            r++;
        }
        else {
            s++;
        }
    }
    sum = sum+s;
    s = 0;
    sum = sum + q/2;
    q = q%2;

    if(p>=r)
    {
        sum = sum + r;
        p = p - r;
        r = 0;
        sum = sum + p/4;
        p = p%4;
        if(p + q*2 <=4 && p + q*2 >0)
        {
            sum++;
            p = 0;
            q = 0;
        }
        else if(p == 3 && q == 1)
        {
            sum = sum + 2;
            p = 0;
            q = 0;
        }
    }
    else
    {
        sum = sum + p;
        r = r - p;
        p = 0;
        sum = sum + r + q;
    }
    printf("%d", sum);
    return 0;
}

