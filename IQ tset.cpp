#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int even=0,odd=0,count=1,arr[n];
    for(i=0;i<n;i++){
        if(ara[i]%2==0){
            even++;
            arr[i]=ara[i];
        }
        else{
            odd++;
            arr[i]=111;
        }
    }
    if(even>odd){
        for(i=0;i<n;i++){
        if(arr[i]>101){
            break;
        }
        else{
            count++;
        }
    }
    }
    else{
        for(i=0;i<n;i++){
        if(arr[i]<101){
            break;
        }
        else{
            count++;
        }
    }
    }
    printf("%d\n",count);
    return 0;
}

