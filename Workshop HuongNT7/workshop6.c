#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<stdlib.h>

int random(int minN, int maxN); //random in range(minN, maxN)
void diceThrows(void); 			//game dice throws
void ballLottery(void);			//game Ball Lottery
void cardDraw(void);			//game cardDraw

int main(){
	srand((int)time(0));
	bool check = true;
	while (check){
	
		printf("\n WELCOME TO OUR GAME\n");
		printf(" ===================\n");
		printf(" Please pick a game\n");
		printf(" 1. Dice Throws\n");
		printf(" 2. Ball Lottery\n");
		printf(" 3. Card Draw\n");
		printf(" 4. Exist\n");
		
		int n;
		scanf("%d", &n);
		if (n==1) diceThrows();
		if (n==2) ballLottery();
		if (n==3) cardDraw();
		if (n==4) check = false;
	}

return 0;
}

int random(int minN, int maxN){ 
	return minN + rand() % (maxN - minN + 1); //random a number, sau do' mod N de tim so du
}
void diceThrows(void){	
	int sum, total =1;
	int count = 0;
	printf("\nDice Thrower\n============");
	printf("\nTotal sought : ");
	scanf("%d", &total);
	
	while (sum != total)
	{
		count++;
		int a = random(1,6);
		int b = random(1,6);
		printf("Result of throw  %d : %d + %d\n", count, a, b);
		sum = a + b;
	}
	printf("You got your total in %d throws!\n", count);
}
void ballLottery(void){
	int sum = 0, total =1;
	int count = 0;
	printf("\nBall Lottery\n============");
	printf("\nTotal sought : ");
	scanf("%d", &total);
	
	while (sum != total)
	{
		count += 2;
		int a = random(1,10);
		int b = random(1,10);
		printf("Result of picks %2.d and %2.d : %d + %d\n", count-1, count, a, b);
		sum = a + b;
	}
	printf("You got your total in %d picks!\n", count);
}
void cardDraw(void){
	char suit1; int suit;
	char rank1,rank2;
	printf("\nCard Draw\n");
	printf("=========\n");
	printf("Suit : ");
//	clear();
	scanf(" %c", &suit1);
	printf("Rank : ");
//	clear();
	scanf(" %c%c", &rank1, &rank2);
	
	char drawSuit[] = "CSDH" ;
	if (suit1 == 'C') suit = 1;
	if (suit1 == 'S') suit = 2;
	if (suit1 == 'D') suit = 3;
	if (suit1 == 'H') suit = 4;
	
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
		
	printf("You got your result in %3.d draws!\n", count);
}
