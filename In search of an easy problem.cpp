#include<stdio.h>
int main()
{
   int n,count=0;
   scanf("%d",&n);
   int ara[100],i;
   for(i=1;i<=n;i++)
   {
       scanf("%d",&ara[i]);

   }
   for(i=0;i<=n;i++)
   {
       if(ara[i]==1){
            count++;
       }

   }
   if(count==0)
   {
       printf("Easy\n");
   }
   else
   {
       printf("HARD\n");
   }

   return 0;
}

