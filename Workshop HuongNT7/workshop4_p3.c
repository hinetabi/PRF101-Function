#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);
void printOut(int min, int max, int columnsNumber, bool prime[500]); //print out the answer

int main(){
	int min, max, columnsNumber, i;
	
	printf("Table of Primes\n===============");
	printf("\nLower limit:  ");
	scanf("%d", &min);
	printf("Upper limit:  ");
	scanf("%d", &max);
	printf("# of columns: ");
	scanf("%d", &columnsNumber);
	
	
	bool prime[500] = {0};	
	
	for (i = min; i <= max; i++)
	{
		if (isPrime(i)) 
			prime[i-min] = true;
	}
	
	printOut(min, max, columnsNumber, prime);
	
return 0;
}
bool isPrime(int n)
{
	int i;
	if (n<2) return false;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
void printOut(int min, int max ,int columnsNumber, bool prime[500])
{
	int i, dem = 0;
	for (i = min; i <= max; i++)
	{
		
		if (prime[i-min]) 
		{
			dem++;
			printf("%7.d", i);	
		}	
		if (dem == columnsNumber) 
		{
			dem = 0;
			printf("\n");
		}
	}
}











