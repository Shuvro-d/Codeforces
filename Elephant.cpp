#include<stdio.h>
int main()
{
  int n,m,o;
  scanf("%d",&n);
  m=n%5;
  if(m!=0)
  {
      o=(n/5)+1;
      printf("%d\n",o);
  }
  else
    {
       o=n/5;
       printf("%d\n",o);
    }
  return 0;
}

