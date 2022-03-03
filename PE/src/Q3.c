#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void selectionSort(int arr[], int n);
void swap(int *a, int *b);
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i = 0;
	int arr[10];
	for (i = 0; i < 5; i++){
		scanf("%d", arr + i);
	}
    selectionSort(arr, 5);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	for (i = 0; i<5; i++){
		printf("%d ", arr[i] * arr[i]);
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
void selectionSort(int arr[], int n)
{
	int i,j;
	for (i = n-1;i > 0 ;i--)
	{
		int max = arr[i] ;
		int maxindex = i;
		for (j = i;j >= 0;j--)
		{
			if(arr[j] >= max)
			{
				maxindex = j;
				max = arr[j];
			}
		}
		//if (maxindex != i) 
		swap(arr + i, arr + maxindex);
	}
}
void swap(int *a, int *b){
	int tg = *a;
	*a = *b;
	*b = tg;
}








