#include <stdio.h>
int main()
{
   long long  int n,i,max=0,count=1;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            if(count>max){
                max=count;
            }
            count=1;
        }
        else{
            count++;
        }
        }
    if(count>max){
        max=count;
    }
    printf("%lld\n",max);
    return 0;
}

