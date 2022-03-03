#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void giai_ma(int card, char &compare_suit, char &compare_rank);
int to_int(char c);
char get_rank(int min, int max);
int get_suit(void);
void print_card(char compare_suit, char compare_rank);

int main()
{
	printf("Card Draw\n");
	printf("=========\n");
	char suit,rank;
	int card;
	suit = get_suit();
	rank = get_rank(2, 9); // se la T neu nhap 10
	srand(time(NULL));
	int i =1;
	char compare_rank, compare_suit;
	while(true)
	{
		card = rand() % 52;
		giai_ma(card, compare_suit, compare_rank);
		printf("Result of draw %d : ", i);
		print_card(compare_suit, compare_rank);
		if(compare_suit == suit && compare_rank == rank)
		{
			if(i < 2)
				printf("You got your result in %d draw!", i);
			else
				printf("You got your result in %d draws", i);
			break;
		}
		i++;
	}
}
int to_int(char c)
{
	return int(c - 48); 
}

char get_rank(int min, int max)
{
	char value;
	char after;
	while(true)
	{
		printf("Rank (2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K, A) : ");
		scanf("%c%c", &value, &after);
		if (value == 'J' || value == 'Q' || value == 'K' || value == 'A')
		{
			if(after != '\n')
			{
				while(getchar() != '\n');
				printf("Invalid rank input!!!\n");
				continue;
		 }
			return value;
		}
		if(value == '1')
		{
			if(after != '0')
			{
				if(after == '\n')
				{
					printf("Invalid rank input!!!\n");
					continue;
				}
				printf("Invalid rank input!!!\n");
				while(getchar() != '\n');
				continue;
			}
			else
			{
				int count = 0;
				while(getchar() != '\n')
				 	count++;
				if(count > 0)
				{
					printf("Invalid rank input!!!\n");
					continue;
				}
				return 'T';
			}
		}
		else if (to_int(value) >= min && to_int(value) <= max)
		{
			if(after != '\n')
			{
				while(getchar() != '\n');
				printf("Invalid rank input!!!\n");
				continue;
			}
			return value;
		}
		else
		{
			if(after == '\n' )
			{
				printf("Invalid rank input!!!\n");
				continue;
			}
			while(getchar() != '\n');
			printf("Invalid rank input!!!\n");
			continue;
		}
	}
}

int get_suit(void)
{
	char suit, after;
	while(true)
	{
		printf("Suit (H,D,C,S) : ");
		scanf("%c%c", &suit, &after);
		if(after != '\n')
		{
			while(getchar() != '\n');
			printf("Invalid suit input!!!\n");
		}
		else if (suit != 'H' && suit != 'C' && suit != 'D' && suit != 'S')
			{
				printf("Invalid suit input!!!\n");
			}
		else return suit;
	}
}

void giai_ma(int card, char &compare_suit, char &compare_rank)
{
	if(card < 13)
		compare_suit = 'C';
	else if (card < 26)
		compare_suit = 'D';
	else if (card < 39)
		compare_suit = 'H';
	else
		compare_suit = 'S';
	if(card % 13 == 9)
		compare_rank = 'T';
	else if(card % 13 == 10)
		compare_rank = 'J';
	else if(card % 13 == 11)
		compare_rank = 'Q';
	else if(card % 13 == 12)
		compare_rank = 'K';
	else if(card % 13 == 0)
		compare_rank = 'A';	
	else
		compare_rank = (char)(card % 13 + 49);
}

void print_card(char compare_suit, char compare_rank)
{
	if(compare_rank == 'T')
		printf("10%c\n", compare_suit);
	else
		printf("%c%c\n", compare_rank, compare_suit);
}


