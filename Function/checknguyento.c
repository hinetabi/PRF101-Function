#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN 1
#define MAX 100

int getInt(char msg[], int min, int max); //read the value from screen

bool isPrime(int n); 					// Check a number if it is a Prime.

void clear(void);						//Clear the cache

int main()
{
	int n = 0;
	int i; 
	n = getInt("Enter a number", MIN, MAX);
	for (i = 2; i<= n; i++) if (isPrime(i)) printf("%d\n", i);
	
	system("pause");
}

bool isPrime(int n)
{	
	if (n<2) return false;
	if (n==2) return true;
	if (n % 2 == 0) return false;
	int i;
	for (i = 3; i<= sqrt(n); i+=2) {
		if (n % i == 0) return false;

	}
	return true;	
}

int getInt(char msg[], int min, int max)
{
	int value, rc;
	int keeptrying = 1;
	char after;
//	printf("%s (from %d to %d): ", msg, min, max);
//	rc = scanf("%d%c", &value, &after);
	do {
         printf("%s (from %d to %d): ", msg, min, max);
         rc = scanf("%d%c", &value, &after);
         if (rc == 0) {
             printf("**No input accepted!**\n\n");
             clear();
         } else if (after != '\n') {
             printf("**Trailing characters!**\n\n"); 
             clear();
         } else if (value < min || value > max) {
             printf("**Out of range!**\n\n");
         } else
             keeptrying = 0;
     } while (keeptrying == 1);
}

void clear(void)
{
	while (getchar() != '\n');
	/* null statement intentional */
}
