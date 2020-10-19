#include<stdio.h>
int main()
{
    long long int n,k,m,s;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
    {
        m=n/2;
    }
    else
    {
        m=(n/2)+1;
    }
    if(k<=m)
    {
        s=((k*2)-1);
    }
    else
    {
        s=((k-m)*2);
    }
    printf("%lld\n",s);
    return 0;
}

