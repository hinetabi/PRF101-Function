#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int minN, int maxN); //random in range(minN, maxN)
void clear(void);
int main(){

	srand((int)time(0));
	
	char suit1; int suit;
	char rank1,rank2;
	printf("Card Draw\n");
	printf("=========\n");
	printf("Suit : ");
//	clear();
	scanf(" %c", &suit1);
	printf("Rank : ");
//	clear();
	scanf(" %c%c", &rank1, &rank2);
	
	int rank;
	if (rank2 != '\n') {
		rank = 10;
	} else 
	{
		if (rank1 >= '2' && rank1 <= '9') rank = rank1 - 48;
		if (rank1 == 'j' || rank1 == 'J') rank = 11;
		if (rank1 == 'q' || rank1 == 'Q') rank = 12;
		if (rank1 == 'k' || rank1 == 'K') rank = 13;
		if (rank1 == 'a' || rank1 == 'A') rank = 1;
	}
	
	char drawSuit[] = "CSDH" ;
	if (suit1 == 'C') suit = 1;
	if (suit1 == 'S') suit = 2;
	if (suit1 == 'D') suit = 3;
	if (suit1 == 'H') suit = 4;
	
	int ranSuit = 100;
	int ranRank = 0;
	int count = 0;
	
	while ( ranRank != rank || ranSuit != suit){
		count++;		
		ranRank = random(1,13);
		ranSuit = random(1,4);	
		if (ranRank >= 10){
			if (ranRank == 11)
				printf("Result of draw %3.d : J%c\n",count, drawSuit[ranSuit-1]);
			if (ranRank == 12)
				printf("Result of draw %3.d : Q%c\n",count, drawSuit[ranSuit-1]);
			if (ranRank == 13)
				printf("Result of draw %3.d : K%c\n",count, drawSuit[ranSuit-1]);
		} else 
			if (ranRank == 1)
				printf("Result of draw %3.d : A%c\n",count, drawSuit[ranSuit-1]);
		else 
			printf("Result of draw %3.d : %d%c\n", count, ranRank, drawSuit[ranSuit-1] );
		}
		
	printf("You got your result in %3.d draws!", count);

return 0;
}
int random(int minN, int maxN)
{ 
	return minN + rand() % (maxN - minN + 1); //random a number, sau do' mod N de tim so du
}
void clear(void)
{
	while (getchar() != '\n');
}c
char getSuit(int min, int max) {
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

