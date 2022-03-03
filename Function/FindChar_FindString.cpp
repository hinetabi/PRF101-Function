#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CARDS 52
#define SUITS 4
#define MAXLEN 3

int findChar(char arr[], int count, char searched);
int findString(char arr[][MAXLEN], int count, char searched[]);
char getCharByPattern(char msg[], char pattern[], int count);
void getStringByPattern(char msg[], char result[], char pattern[][MAXLEN], int count);
int getInt(char msg[], int min, int max);
int main()
{
	char suit;
	char rank[MAXLEN];
	

	char suitName[] = {'S', 'H', 'D', 'C'};
	char rankName[][3] = {"2", "3", "4", "5", "6", "7", "8", 
				"9", "10", "J", "Q", "K", "A"};
	srand(time(NULL));
	suit = getCharByPattern("Enter suit (S, H, D, C): ", suitName, SUITS);
	getStringByPattern("Enter rank (2-10, J, Q, K, A):", rank, rankName, CARDS/SUITS);
	int random, i = 0;
	do
	{
		int suitIndex=0, rankIndex=0;
		// get random number from 0 - 51
		random = rand()% CARDS;
		suitIndex = random / (CARDS/SUITS);
		rankIndex = random % (CARDS/SUITS);
		printf("\nResult of draw #%d: %s%c", ++i, rankName[rankIndex], suitName[suitIndex]);
		if(suitName[suitIndex] == suit &&
			strcmp(rankName[rankIndex], rank) == 0)
			{
				printf("\nYou got your result in %d draws\n", i);
				break;
			}
	}while(true);
					
	system("pause");
}
int findChar(char arr[], int count, char searched)
{
	int i;
	for(i = 0; i < count; i++)
		if(arr[i] == searched) return i;
	return -1;	
}
char getCharByPattern(char msg[], char pattern[], int count)
{
	char result, after;
	int rc;
	do
	{
		printf(msg);
		rc = scanf("%c%c", &result, &after);
		if(rc == 0) {
			while(getchar() != '\n');
			continue;
		}
		else if(after != '\n')
		{
			while(getchar() != '\n');
			continue;
		}
		else if(findChar(pattern, count, result) == -1) 
		{
			continue;
		}
		else break;
	}while(true);
	
	return result;
}

int getInt(char msg[], int min, int max)
{
	int rc, result;
	char after;
	do
	{
		printf(msg);
		rc = scanf("%d%c", &result, &after);
		if(rc == 0) continue;
		else if(after != '\n')
		{
			while(getchar() != '\n');
			continue;
		}
		else if(result < min || result > max)
		{
			while(getchar() != '\n');
			continue;
		}
		else break;
	}while(true);
	return result;	
}
int findString(char arr[][MAXLEN], int count, char searched[])
{
	int i;
	for(i = 0; i < count; i++)
		if(strcmp(arr[i], searched) == 0) return i;
	return -1;	
}

void getStringByPattern(char msg[], char result[], char pattern[][3], int count)
{
	do
	{
		printf(msg);
		scanf("%2s", result);
		while(getchar() != '\n');
		if(findString(pattern, count, result) == -1) continue;
		else 
		  break;
		
	}while(true);
	
}
