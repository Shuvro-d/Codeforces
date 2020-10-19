#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ara[m],i,j,a,count=0;
    int arr[m];
    int s,ar[m],b;
    for(i=0;i<m;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(ara[i]==ara[j]){
                count++;
            }
        }
        arr[i]=count;
        count=0;
    }
    for(i=0;i<m;i++){
        if(arr[i]==n){
            printf("0");
            goto x;
        }
    }
    for(i=0;i<m;i++)
    {
       for(j=i+1;j<m;j++)
        {
           if(ara[i]>ara[j])
            {
                a=ara[i];
                ara[i]=ara[j];
                ara[j]=a;
              }
        }
    }
    for(i=0;i<(m-(n-1));i++){
        ar[i]=(ara[i+(n-1)]-ara[i]);
    }
    b=ar[0];
   for(i=0;i<(m-(n-1));i++){
      if(ar[i]<b){
         b=ar[i];
      }
   }
    printf("%d\n",b);
    x:
    return 0;
}

