#include <stdio.h>
#include <string.h>
int chk(char word[]){

	int i,n=0;
		for (i=0;i<strlen(word);i++){
		if(islower(word[i])){
			n++;
		}
	}
	return n;
}
int main(){
	char word[100];
	int i;
	scanf("%s",&word);
	if(islower(word[0]) && chk(word)>1){
		printf("%s",word);
	}
	else if(islower(word[0])&& chk(word)==1){
		printf("%c",toupper(word[0]));
		for(i=1;i<strlen(word);i++){
			printf("%c",tolower(word[i]));
		}
	}
	else if(chk(word)==0){
		for(i=0;i<strlen(word);i++){
			printf("%c",tolower(word[i]));
		}
	}
	else{
		printf("%s",word);
	}
	return 0;
}

