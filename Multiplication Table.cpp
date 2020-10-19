#include<stdio.h>
int main()
{
    long long int n,x;
    scanf("%lld %lld",&n,&x);
    long long int i,count=0;
    for(i=1;i<=n;i++)

    {
        if(x%i==0 && (x/i)<= n)

        {
            count++;
        }
    }
    printf("%lld\n",count);
    return 0;
}

