#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CARDS 52
#define SUITS 4
int random(int min, int max);
void display(int arr[]);
void shuffle(int card[]);
void swap(int *a, int *b);
void displayDraw(int arr[], int drawnCard[]);
void draw(int drawnCard[], int nDraw);


int main(){
	int card[CARDS], drawnCard[CARDS] = {0}, nDraw;
	int i, j, cardLeft;
	for (i = 0; i < 52; i++){
		card[i] = i;
	}
	
	display(card);
	//Process
	shuffle(card);
	
	//OUT PUT
	printf("\nOUT PUT: \nAfter linear shuffle: \n");
	
	display(card);
	
	printf("Enter the number of drawn cards: ");
	scanf("%d", &nDraw);
	
	draw(drawnCard, nDraw);
	
	displayDraw(card, drawnCard);
	
return 0;
}
void display(int arr[]){
	char suitName[] = {'S', 'H', 'D', 'C'};
	char rankName[][3] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	int i;
	for (i = 0; i<CARDS; i++){
		int suitIndex = arr[i] / (CARDS / SUITS);
		int rankIndex = arr[i] % (CARDS / SUITS);
		printf("%s%c ", rankName[rankIndex], suitName[suitIndex]);
		if (i % (CARDS / SUITS) == CARDS / SUITS - 1) printf("\n");
	}
}
void shuffle(int card[]){
	srand(time(NULL));
	
	int i,j, cardLeft;
	
	cardLeft = CARDS;

	for ( i = 0; i<CARDS; i++){
		int j = i + rand() % cardLeft;
		swap(card+i, card+j);
		cardLeft--;
	}
	
}
void swap(int *a, int *b){
	int tg = *a;
	*a = *b;
	*b = tg;
}
void displayDraw(int arr[], int drawnCard[]){
	char suitName[] = {'S', 'H', 'D', 'C'};
	char rankName[][3] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	int i;
	for (i = 0; i<CARDS; i++){
		int suitIndex = arr[i] / (CARDS / SUITS);
		int rankIndex = arr[i] % (CARDS / SUITS);
		if (drawnCard[i] == 1){
			printf("%s%c ", rankName[rankIndex], suitName[suitIndex]);
		}
	}
}
void draw(int drawnCard[], int nDraw){
	srand(time(NULL));
	int i, j, cardLefts = CARDS, skipped;
	
	for (i = 0; i<nDraw; i++){

		int drawcard = rand() % cardLefts;
		for (j = 0; j < drawcard - 1; j++){
			if (drawnCard[j] == 1){
				drawcard++;
			}
		}
		
		drawnCard[drawcard] = 1;
		
		cardLefts--;
		
	}
}






