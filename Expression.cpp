#include<stdio.h>
int main()
{
   int a,b,c,ara[8],i,max;
   scanf("%d %d %d",&a,&b,&c);
   ara[0]=a*b*c;
   ara[1]=a+b*c;
   ara[2]=(a+b)*c;
   ara[3]=a*(b+c);
   ara[4]=a+b+c;
   ara[5]=a+(b*c);
   ara[6]=a*b+c;
   ara[7]=(a*b)+c;
   max=ara[0];
   for(i=0;i<8;i++){
    if(ara[i]>max){
        max=ara[i];
    }
   }
   printf("%d\n",max);
    return 0;
}

