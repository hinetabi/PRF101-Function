#include<stdio.h>
#include <math.h>
#include <stdbool.h>

void simplify(int *numerator, int *denominator); // simplify the fraction


int main(){
	int numerator, denominator;
	bool check = false;
	printf("Fraction Simplifier\n===================");
	printf("\nNumerator:	");
	scanf("%d", &numerator);
	printf("Denominator:	");
	scanf("%d", &denominator);
	
	printf("%d / %d = ", numerator, denominator);
	if (numerator == 0)
	{
		printf("%d" , 0);
	} else 
	{
		if (denominator * numerator < 0) //include negative number into the problem.
		{
			check = true;
			numerator = abs(numerator);
			denominator = abs(denominator);
		}
		  
		simplify( &numerator, &denominator);
	
		if (check) printf("-");
		
		printf("%d / %d", numerator, denominator);
	}
	

return 0;
}

void simplify(int *numerator, int *denominator)
{
	int i = 2;
	int numerator1, denominator1;
	
	numerator1 = *numerator; 
	denominator1 = *denominator;
	
//	printf("%d %d", numerator1, denominator1);
//	while (check)
	{
		while ((numerator1 > 1) && (denominator1 > 1) )
		{
			while ((numerator1 % i == 0) && (denominator1 % i == 0)) //divide the common divisor
			{
				numerator1 = numerator1 / i;
				denominator1 = denominator1 / i;
			}
			i++;
			if ((i > numerator1) || (i>denominator1)) break;
		}
	}	

	*numerator = numerator1; 
	*denominator = denominator1;	
	
}

