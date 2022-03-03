#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumDigitsOfNumber(int n){
	int sum = 0;
	while (n > 0){
		int digits = n % 10;
		sum = sum + digits;
		n/=10;
	}
	return sum;
}
int sumDigitOfStringNumber(char n[]){
	int sum = 0;
	int i = 0;
	for (i = 0; i< strlen(n); i++){
		int digit = (int) n[i] - 48;
		sum = sum + digit;
	}
	return sum;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char n[100];
	scanf("%s", &n);	 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int ans = sumDigitOfStringNumber(n);
	printf("%d", ans);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

