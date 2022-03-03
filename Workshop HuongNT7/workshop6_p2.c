#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int minN, int maxN); //random in range(minN, maxN)

int main(){
		
	srand((int)time(0));
	int sum = 0;
	int count = 0;
	printf("Ball Lottery\n============\n");
	int total = getInt(2,20);
	while (sum != total)
	{
		count += 2;
		int a = random(1,10);
		int b = random(1,10);
		printf("Result of picks %d and %d : %d + %d\n", count-1, count, a, b);
		sum = a + b;
	}
	printf("You got your total in %d picks!", count);

return 0;
}

int random(int minN, int maxN)
{ 
	return minN + rand() % (maxN - minN + 1); //random a number, sau do' mod N de tim so du
}
 int getInt(int min, int max) {
     int value, keeptrying = 1, rc;
     char after;
     do {
         printf("Enter Total sought in the range [%d,%d] : ",
                min, max);
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

     return value;
 }
 void clear (void) {

     while ( getchar() != '\n' )
         ;  /* null statement intentional */
 }



