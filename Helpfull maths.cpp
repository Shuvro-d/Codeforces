#include<stdio.h>
#include<string.h>
int main()
{
    char ara[101],arr[51];
    int a,i,j;
    gets(ara);
    int length=strlen(ara);
    int x=length/2;
    for(i=0,j=0;i<length,j<=x;i=i+2,j++){
         arr[j]=ara[i];
    }
     for(i=0;i<=x;i++){
        for (j=i+1;j<=x;j++){
            if (arr[i] > arr[j]){
                a =arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<=x;i++){
         if(i==x){
              printf("%c",arr[i]);
         }
         else{
            printf("%c+",arr[i]);
         }
    }
   return 0;
}

