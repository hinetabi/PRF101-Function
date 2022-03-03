#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i;
	char str[100];
	
	int dem[200] = {0};
	bool check[200] = {false};
	gets(str); 
  	for (i = 0; i < strlen(str); i++){
		if (str[i] >= 97 && str[i] <= 122) 
		{
			dem[str[i]]++;
		}
			
	}	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	for (i = 0; i < strlen(str); i++){
		if (dem[str[i]] != 0 && !check[str[i]]) {
			printf("%c_%d ", str[i], dem[str[i]]);
			check[str[i]] = true;
		}
	}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

