#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ara[n][n];
    long long int i,j;
    for(j=0;j<n;j++){
        ara[0][j]=1;
    }
    for(i=0;i<n;i++){
        ara[i][0]=1;
    }
    long long int sum=0;
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            ara[i][j]=ara[i-1][j]+sum;
            sum=ara[i][j];
        }
        sum=0;
    }
     printf("%lld\n",ara[n-1][n-1]);
    return 0;
}

