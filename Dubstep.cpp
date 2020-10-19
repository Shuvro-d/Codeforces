#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    gets(s);
    int length=strlen(s);
    int i,j,count=0;
    for(i=0;i<length;){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            if(count==0) {
                i=i+3;
            }
            else{
            printf(" ");
            i=i+3;
            }
        }
        else{
            printf("%c",s[i]);
            count++;
            i++;
        }
    }
    return 0;
}
