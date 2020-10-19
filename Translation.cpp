#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[101];
    scanf("%s",a);
    scanf("%s",b);
    int i,j,l=strlen(a),k=strlen(b),count=0;
    for(i=0,j=k-1;i<k;i++,j--){
        c[j]=b[i];
    }
    for(i=0;i<k;i++){
        if(a[i]==c[i]){
            count++;
        }
    }
    if(count==l){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

