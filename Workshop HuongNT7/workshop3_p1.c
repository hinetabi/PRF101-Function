#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int size(long long n)
{	
	int dem = 0;
	while (n > 0)
	{
		n = n % 10;
		dem += 1;
	}
	return dem;
}


int main() {
  	system("cls");
  	int n;
  	int digit[10] = {0};
	int i, weight = 0;
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
	scanf("%d", &n);
	int len = size(n), l = len;
	for (i = 1; i<len+1; i++)
	{
		digit[len+1 - i] = n % 10;
		n /= 10; 
	}
  	for (i = 1; i< len; i++)
  	{
		weight += digit[i] * (len+1);
		len -= 1;
	}
  	weight += digit[l];
  
  
  
  // OUTPUT for marking:
   	printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("%d", weight);
	if (weight % 11 == 0) printf("This is a valid SIN.");
	else printf("This is not a valid SIN.");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}

