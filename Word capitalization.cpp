#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    gets(word);
    int i,length=strlen(word);;
    if(word[0]>='a' && word[0]<='z'){
        word[0]='A'+word[0]-'a';
        for(i=0;i<length;i++){
        printf("%c",word[i]);
    }
    }
    else{
        printf("%s\n",word);
    }

    return 0;
}

