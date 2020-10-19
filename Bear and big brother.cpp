#include<stdio.h>
int main()
{
   int l,b,i,count=0;
   scanf("%d %d",&l,&b);
   for(i=1;i<10;i++)
   {
       l=l*3;
       b=b*2;
       count++;
       if(l>b)
        {
        break;
        }
       else
        {
        continue;
        }
   }
   printf("%d\n",count);
   return 0;
}

