#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,length_1,length_2,length_3,z=0,x=0;
    char a[101],b[101],c[101];
    gets(a);gets(b);gets(c);
    length_1=strlen(a);length_2=strlen(b);length_3=strlen(c);
    char d[length_1+length_2];
    if(length_1+length_2 != length_3){
        printf("NO");
    }
    else {
    for(i=0;i<length_1+length_2;i++){
        if(i<length_1){
            d[i]=a[i];
        }
        else{
            d[i]=b[i-length_1];
        }
        z=0;
        for(j=0;j<length_3;j++){
            if(d[i]==c[j]){
                z++;
                c[j]='0';
                break;
            }
        }
        if(z==0){
            x++;
            printf("NO");
            break;
        }
    }
    if(x==0){
        printf("YES");
    }
    }
    return 0;
}

