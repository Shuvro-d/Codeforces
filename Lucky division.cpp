
#include <stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    int ara[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
        for(i=0;i<14;i++){
         if(n==ara[i]){
            f++;
            break;
        }
        else if(n%ara[i]==0){
            f++;
            break;
        }
     }
    if(f>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
   return 0;
}


