#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define WORD_LEN 100
int string_words(char s[], char words[][WORD_LEN + 1]){
	int i,j;
	int count = 0;
	bool inWord = true;
	for (i = 0; i<= strlen(s); i++){
		
		if (!inWord && !isblank(s[i])){
			inWord = true;
			j = 0;
			words[count][j++] = s[i];
		} else if (inWord && !isblank(s[i])){
			words[count][j++] = s[i];
		} else if(inWord && (isblank(s[i]) || s[i] == '\0'))
		{
			inWord = false;
			words[count++][j] = '\0';			
		}
	}
	
}
int main(){
	int i,j;
	char s[100], words[100][100];
	int count = string_words(s, words);
	for (i = 0; i<count; i++){
		printf("Word #%d : %s \n", words[i]);
	}
	

return 0;
}
