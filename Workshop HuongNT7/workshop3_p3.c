#include<stdio.h>
#include<stdlib.h>

int main(){
	
	long long upc_numbers;
	while (1)
	{
		printf("UPC (0 to quit): ");
		scanf("%lld", &upc_numbers);
		
		// check if UPC number = 0
		if (upc_numbers == 0)
		{
			printf("Have a Nice Day!\n");
			break;
		}
		
		int digit[12]= {0};
		int i = 11;
		while (upc_numbers > 0)
		{
			digit[i] = upc_numbers %10;
			upc_numbers /= 10;
			i--; 
		}
		int sum= 0 ;
		//calculate sum of the 1,3,5,..,11th digits. 
		sum = sum + digit[0] + digit[2] + digit[4] + digit[6] + digit[8] + digit[10] ;
		//multiple sum by 3 and add the 2,4,6,...,10th digit.
		sum = sum *3 + digit[1] + digit[3] + digit[5] + digit[7] + digit[9];
		//check 
		sum = sum + digit[11];
		if (sum % 10 ==0)
		{
			printf("This is a valid UPC.\n");
			printf("The company code is %d%d%d%d%d%d.\n", digit[0], digit[1], digit[2], digit[3], digit[4], digit[5]);
			printf("The product code is   %d%d%d%d%d.\n", digit[6], digit[7], digit[8], digit[9], digit[10]);
		} else printf("This is not a valid UPC.\n");
	}
	system("pause");
	
return 0;
}
