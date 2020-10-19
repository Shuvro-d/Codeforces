#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    int length=strlen(name);
    int i,j,a,count=0;
    for (i = 0; i < length; ++i){
        for (j = i + 1; j < length; ++j){
            if (name[i] > name[j]){
                a =  name[i];
                name[i] = name[j];
                name[j] = a;
            }
        }
    }
    for(i=0; i<length; i++){
        if(name[i] != name[i+1]){
            count++;
        }
    }
    if(count%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}

