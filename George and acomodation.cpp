#include<stdio.h>
int main()
{
   int n,i,j;
   while(scanf("%d",&n)==1){
       int ara[n][2],arr[n],count=0;
   for(i=0;i<n;i++){
     for(j=0;j<2;j++){
        scanf("%d",&ara[i][j]);
    }
   }
   for(i=0;i<n;i++){
    arr[i]=ara[i][1]-ara[i][0];
   }
    for(i=0;i<n;i++){
      if(arr[i]>=2){
        count++;
      }
   }
   printf("%d",count);
   }
  return 0;
}

