#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, i, j;
	int count = 0;
	int number[10] = {0};
	int index[10] = {0};
	int flag[10] = {0};
	int dem[10] = {0};

	for (i = 0; i<7; i++){
		scanf("%d", &n);
		if (n >= 10 && n <= 99){
			number[count] = n;
			index[count] = n;
			count++;	
		}	
	}	 
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

	if (count == 0) printf("no two-digit number");
	else {
		for (i =0; i<count; i++){			
			if (flag[i] == 0){
				for (j = i; j < count; j++){
				if (number[j] == number[i]){
					dem[i]++;
					flag[j] == 1;
				}
			}
			}}
		int max = 0, maxIndex;
		for (i = 0; i < count; i++)	{
			if (max < dem[i]){
				max = dem[i];
			}
		}
		for (i = 0; i < count; i++){
			if (dem[i] == max){
				printf("%d ", number[i]);
			}
		}
}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

