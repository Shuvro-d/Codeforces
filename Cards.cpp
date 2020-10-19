#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char ara[n];
    scanf("%s",&ara);
    int num_n=0,num_z=0;
    for(i=0;i<n;i++){
        if(ara[i]=='z'){
            num_z++;
        }
           else if(ara[i]=='n'){
            num_n++;
        }
    }
    int ara_n[num_n],ara_z[num_z];
    for(i=0;i<num_n;i++){
        ara_n[i]=1;
    }
    for(i=0;i<num_z;i++){
        ara_z[i]=0;
    }
    for(i=0;i<num_n;i++){
        printf("%d ",ara_n[i]);
    }
      for(i=0;i<num_z;i++){
        printf("%d ",ara_z[i]);
    }
    return 0;
}
s
