#include<stdio.h>
#include<string.h>
int main()
{
    char w[100];
    scanf("%s",w);
    int length=strlen(w),c=0,d=0,i;
    for(i=0;i<length;i++){
        if(w[i]>=97 && w[i]<=122){
            c++;
        }
        else{
            d++;
        }
    }
    if(c>=d){
        for(i=0;i<length;i++){
            if(w[i]>=65 && w[i]<=90){
                w[i]='a'+(w[i]-'A');
            }
        }
    }
    else{
        for(i=0;i<length;i++){
            if(w[i]>=97 && w[i]<=122){
                w[i]='A'+(w[i]-'a');
            }
        }
    }
    printf("%s\n",w);
    return 0;
}

