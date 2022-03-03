#include<stdio.h>
#include <string.h>

#define MAX 1000

void getstr(char msg[], char s[], int max);
void removeEleByIndex(char *str, int index);
void redundantSpace(char *str);

int main(){
	
	char s[1000];
	printf("String Cleaner\n");
	printf("==============\n");
	getstr("String to be cleaned :", s, MAX);
	redundantSpace(s);
	printf("%s", s);
	
	
return 0;
}
void getstr(char msg[], char s[], int max){		
	char c;
	int i = 0;
	printf("%s", msg);
	while ((c = getchar()) != '\n')
		if (i<max)
			s[i++] = (char) c;
	s[i] = '\0';
}

void removeEleByIndex(char *str, int index){
	int i = index;
	for (; i < strlen(str); i++){
		*(str + i) = *(str + i + 1);
	}
}
void redundantSpace(char *str){
	int i = 0, j = 0;
	for (i = 0; i < strlen(str); i++){
		if (*(str + i) == ' '){
			for (j = i + 1; j < strlen(str); j++){
				if (*(str + j) == ' '){
					removeEleByIndex(str, j);
					j--;
				}else{
					break;
				}
			}
		}
	}
	if (*(str) == ' ') removeEleByIndex(str, 0);
	if (*(str + strlen(str) - 1) == ' ') removeEleByIndex(str, strlen(str) - 1);
}
