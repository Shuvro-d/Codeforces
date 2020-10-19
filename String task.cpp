#include<stdio.h>
#include<string.h>
int main()
{
    int i, length;
    char s[101];
    scanf("%s", &s);
    length = strlen(s);
    for (i = 0; i < length; i++){
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'&&s[i]!='y' &&s[i]!='Y'){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
            printf(".%c", s[i]);
        }
    }
    return 0;
}

