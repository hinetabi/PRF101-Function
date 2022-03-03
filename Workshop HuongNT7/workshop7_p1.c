#include<stdio.h>
#include<stdbool.h>

bool lon_hon(unsigned long long a, unsigned long long b); // a>=b => true, a<b => false;
void swapInt(unsigned long long *a, unsigned long long *b);
void swapDouble(double *a, double *b);
void swapBarcode(long long int barcode[], double price[], long long int quantity[], int count ); 


int main(){
	bool check = true;
	
	unsigned long long barcode[101], quantity[101];
	double price[101];
	int count = 0, i, j;
	
	//IN PUT
	printf("Packaged Goods Organizer\n========================\n");
	while (1)
	{
		printf("Barcode  :  ");
		scanf("%llu", &barcode[count]);
		if (barcode[count] == 0) break;		
		
		printf("Price	 :  ");
		scanf("%lf", &price[count]);
		
		printf("Quantity :  ");
		scanf("%llu", &quantity[count]);
		count++;
	}
	//Processing
	swapBarcode(barcode, price, quantity, count);
	
	//OUT PUT
	printf("\n             Goods in Stock\n             ==============\n");
	printf("Barcode    Price   Quantity   Value\n");
	printf("-----------------------------------\n");
	
	double sum = 0;
	for(i = 0 ; i<count; i++)
	{
		printf("%10.llu", barcode[i]);
		printf("%6.2lf", price[i]);
		printf("%11.d", quantity[i]);
		printf("%8.2lf\n", price[i] * quantity[i]);
		sum += price[i] * quantity[i];
	}
	printf("                             ------\n");
	printf("Total value goods in stock   %6.2lf", sum);
return 0;
}
bool lon_hon(unsigned long long a, unsigned long long b)
{
	if (a>=b) return true;
	return false;
}
void swapInt(unsigned long long *a, unsigned long long *b)
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
void swapBarcode(long long int barcode[], double price[],long long int quantity[], int count ){
	int i,j;
	for (i = 0; i<count; i++)
		for (j = i; j < count; j++)
		{
			if (lon_hon(barcode[i],barcode[j]))
			{
				swapInt(&barcode[i], &barcode[j]);
				swapDouble(&price[i], &price[j]);
				swapInt(&quantity[i], &quantity[j]);
			}
		}
		
}
