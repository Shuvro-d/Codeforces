#include<stdio.h>
int main()
{
   int n,m,a,b,x,y,z,rubles_1,rubles_2;
   while(scanf("%d %d %d %d",&n,&m,&a,&b)==4){
    if(b>a){
            if(m>n){
                rubles_1=b;
                rubles_2=n*a;
            }
            else{
                 rubles_1=n*a;
                 x=n/m;
                 y=n%m;
                 z=x*b;
                 rubles_2=z+(y*a);
            }

   }
   else if(a==b){
    x=n/m;
    y=n%m;
    z=x*b;
    if(y==0){
        rubles_1=z;
        rubles_2=n*a;
    }
    else{
        rubles_1=z+b;
        rubles_2=n*a;
    }
   }
   else{
    x=n/m;
    y=n%m;
     z=x*b;
    if(y==0){
        rubles_1=n*a;
        rubles_2=z;
    }
    else{
        rubles_1=n*a;
        rubles_2=z+b;
    }
    }
   if(rubles_1<rubles_2)printf("%d\n",rubles_1);
   else printf("%d\n",rubles_2);
   }

    return 0;
}

