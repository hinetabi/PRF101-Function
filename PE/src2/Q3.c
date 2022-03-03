#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void bubbleSort(double arr[], int count);
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	double arr[10];
	int i;
	for (i = 0; i < 5; i++){
		scanf("%lf", arr + i);
	}
	bubbleSort(arr, 5);
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	for (i = 0; i < 5; i++){
		printf("%lf ", arr[i]);
	}
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
void bubbleSort(double arr[], int count){
	int i, j;
	for (i = count - 1 ; i>=0; i--){
		for (j = 0; j < i; j++){
			if (arr[j] < arr[j+1]){
				double tg = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tg;
			}	
		}
	}
	
}
