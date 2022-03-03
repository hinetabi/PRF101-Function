#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
int main(){
	char str[501];
	
//	scanf("%s", &str);
	gets(str);
	redundantSpace(str);
	
	int i = 0;
	if (str[i] <= 'z' && str[i] >= 'Z')
		str[i] -= 32;
	for (i = 1; i<strlen(str); i++){
		if (str[i] == ' ') {
			if (str[i+1] <= 'z' && str[i+1] >= 'Z')
					str[i+1] -= 32; //upcase str[i+1]
		}
		if (str[i-1] != ' ' && str[i] <= 'Z' && str[i] != ' ') str[i] += 32; //downcase str[i+1]
	}
	printf("%s", str);
	return 0;
}
