#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a,b;
	scanf("%d%d",&a,&b);




	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	char s1[100];
	char s2[100];
	
	itoa(a,s1,2);
	itoa(b,s2,2);
	printf("0%s ",s1);
	printf("0%s",s2);

	return 0;
}

