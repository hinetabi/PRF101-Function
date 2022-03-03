#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool checkSymmetricArray(int a[], int n);
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,a[20];
	scanf("%d", &n);
	int count = 0;
	int sum = 0;
	for (i = 0; i<n; i++){
		scanf("%d", a + i);
		if (a[i] % 2 == 0) {
			count++;
			sum += a[i];
		}
	}

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


	if (count == n) 
		printf("0"); 
	else if (checkSymmetricArray(a, n)) 
		printf("0");
	else 
		printf("%d", sum);
	

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
bool checkSymmetricArray(int a[], int n){
	int i ;
	for (i = 0; i < n /2 ;i++ ) {
		if (a[i] != a[n-i-1]) return false;
	}
	return true;
}
