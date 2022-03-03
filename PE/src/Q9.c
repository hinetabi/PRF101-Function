#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int findChar(char arr[], int count, char searched);
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	gets(str);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	int index = findChar(str, strlen(str), '.');
	int a = (int) str[index-1] - 48;
	int b = (int) str[index+1] - 48;
	printf("%d", a*b);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
int findChar(char arr[], int count, char searched)
{
	int i;
	for(i = 0; i < count; i++)
		if(arr[i] == searched) return i;
	return -1;	
}

