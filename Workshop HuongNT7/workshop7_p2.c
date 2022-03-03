#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool lon_hon(unsigned long long a, unsigned long long b); // a>=b => true, a<b => false;
void swapInt(int *a, int *b);
void swapDouble(double *a, double *b);
void swapString(char a[], char b[]);

int main(){
	bool check = true;
	
	char isbn[101][11];
	int quantity[101];
	double price[101];
	int count = 0, i, j;
	
	printf("Books in Stock Organizer\n========================\n");
	while (1)
	{
		printf("ISBN:");
//		while (getchar() != '\n');
		scanf("%[^\n]", isbn[count]);
		
		if (strcmp(isbn[count], "0") == 0) break;		

		printf("Price:");
		scanf("%lf", &price[count]);
		
		printf("Quantity:");
		scanf("%llu", &quantity[count]);
		while (getchar() != '\n');
		count++;
	}
	for (i = 0; i<count; i++)
		for (j = i; j < count; j++)
		{
			if (strcmp(isbn[i],isbn[j]) >= 0)
			{
				swapString(isbn[i], isbn[j]);
				swapDouble(&price[i], &price[j]);
				swapInt(&quantity[i], &quantity[j]);
			}
		}
	
	printf("\n             Books in Stock\n             ==============\n");
	printf("ISBN        Price   Quantity   Value\n");
	printf("--------------------------------------\n");
	
	double sum = 0;
	for(i = 0 ; i<count; i++)
	{
		printf("%s   ", isbn[i]);
		printf("%-6.2lf", price[i]);
		printf("%8.d", quantity[i]);
		printf("%11.2lf\n", price[i] * quantity[i]);
		sum += price[i] * quantity[i];
	}
	printf("                                ------\n");
	printf("Total value goods in stock    %8.2lf", sum);
return 0;
}

void swapInt(int *a, int *b)
{
	unsigned long long tg;
	tg = *a;
	*a = *b;
	*b = tg;
}
void swapDouble(double *a, double *b)
{
	double tg;
	tg = *a;
	*a = *b;
	*b = tg;	
}
void swapString(char a[], char b[]){
	char tg[11];
	strcpy(tg, a);
	strcpy(a,b);
	strcpy(b,tg);
	
	
}

