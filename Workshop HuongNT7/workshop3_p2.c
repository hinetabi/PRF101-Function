#include<stdio.h>

int main(){
	long long isbn_number;
	
	while (1)
	{
		// read ISBN number
		printf("ISBN (0 to quit) : ");
		scanf("%lld", &isbn_number);
		
		// check if ISBN number = 0
		if (isbn_number == 0)
		{
			printf("Have a Nice Day!\n");
			break;
		}
		int digits[10] = {0}; //Set all elements of array digits = 0
		int i = 9;
		
		// read each digit of ISBN number and save in the array digits
		while (isbn_number > 0)
		{
			digits[i] = isbn_number % 10;
			i--;
			isbn_number = isbn_number / 10; 
		}

		// calculate sum of the products when multiply each digit from the first to the ninth by a weight from 10 to 2 respectively
		int sum = 0;
		for (i=0; i<9; i++)
		{
			printf("Digits[%d] = %d\n", i,digits[i]);
			sum = sum + digits[i] * (10-i);

		}

		// calculate total
		int total = sum + digits[9];
		
		// check 
		if ((total % 11) == 0)
		{
			printf("This is a valid ISBN.\n");
		} else
		{
			printf("This is not a valid ISBN.\n");
		} 
	}
	
	return 0;
}




