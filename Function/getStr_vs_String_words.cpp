#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int string_words(char str[], char words[][10]);
void sort(char words[][10], int count);
void getstr(char msg[], char s[], int max, bool isEmpty) ;
int main(){
	char str[100];
	char words[20][10];
	getstr("Enter input String : ", str, 99 , true);
	
	int count, i;
	count = string_words(str, words);
	
	for (i = 0; i<count; i++){
		printf("words[%d] = %s\n",i, words[i]);
	}
//	printf("After sort : \n");
//	sort(words, count);
//	
//	for (i = 0; i<count; i++){
//		printf("words[%d] = %s\n",i, words[i]);
//	}
	
return 0;
}
int string_words(char str[], char words[][10]){
	int count = 0;
	int i,j;
	bool inWord = false;
	for (i = 0; i<=strlen(str); i++){
		if (!inWord && str[i] != ' ') 
		{
			inWord = true;
			j = 0;
			words[count][j++] = str[i];	
		} else if (inWord && str[i] != ' ' && str[i] != '\0') 
			words[count][j++] = str[i];
		else if (inWord && (str[i] == ' '  || str[i] == '\0'))
		{
			inWord = false;
			words[count][j] = '\0';
			count++; 
		}
	}
	return count;
}
void sort(char words[][10], int count){
	int i, j;
	for (i = count-1; i > 0; i--){
		for (j = 0; j<i; j++){
			if (strcmp(words[j] , words[j+1]) > 0){
				char tg[10];
				strcpy(tg, words[j]);
				strcpy(words[j], words[j+1]);
				strcpy(words[j+1], tg);
			}
		}
	}
}
void getstr(char msg[], char s[], int max, bool isEmpty) {
     do {
     	printf("%s", msg);
		int i, c;
   		i = 0;
   	  	while((c = getchar()) != '\n' && c != EOF)
         	if (i < max)
             s[i++] = (char) c;
    	 s[i] = '\0';
    	if (isEmpty) break;
    	else if (strlen(s) != 0) break;
	} while (1);
	
}













