#include<stdio.h>
int main()
{
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0)
    {
        n=n/a;
    }
    else
    {
        n=(n/a)+1;
    }
    if(m%a==0)
    {
        m=m/a;
    }
    else
    {
        m=(m/a)+1;
    }
    long long int x=n*m;
    printf("%lld\n",x);
    return 0;
}

