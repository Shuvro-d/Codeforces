#include<stdio.h>
int main()
{
    long long int n,r=1;
    scanf("%lld",&n);
    while (r*5<n)
    {
        n-=r*5;
        r*=2;
    }
    n=n-1;
    n=n/r;
    if(n==0){
        printf("Sheldon\n");
    }
    else if(n==1){
        printf("Leonard\n");
    }
    else if(n==2){
        printf("Penny\n");
    }
    else if(n==3){
        printf("Rajesh\n");
    }
    else if(n==4){
        printf("Howard\n");
    }
    return 0;
}

