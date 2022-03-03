#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n;
	scanf("%d", &n);  
  	int i = 0;  
  	int ans = 1;
  	for (i = 2; i <= n/2; i++){
  		if (i % 2 == 0)
		  ans = ans * i;
	  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
 	printf("%d", ans);
	

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

