#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void swapString(char a[], char b[]){
	char tg[50];
	strcpy(tg, a);
	strcpy(a,b);
	strcpy(b,tg);
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int i;
	char arr[50][50];
	for (i = 0; i < 5; i++){
		scanf(" %s", &arr[i]);
	}
   	int j;
	for (i = 0; i<5; i++)
		for (j = i; j < 5; j++)
		{
			if (strcmp(arr[i],arr[j]) >= 0)
			{
				swapString(arr[i], arr[j]);
			}
		}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 
	for (i = 0; i<5; i++){
		printf("%s ", arr[i]);
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
