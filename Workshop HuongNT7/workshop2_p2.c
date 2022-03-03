#include<stdio.h>

int main(){
	
	double value, remainder;
	int truncated, rounded;
	
	printf("Enter a value : ");
	scanf("%lf", &value);
	

	
	if (value > 0)
	{
		truncated = value;
		remainder = value - truncated;
		rounded = value + 0.5;			
	} else 
	{
		truncated = value;
		remainder = value - truncated;
		rounded = value - 0.5;			
	}
	
	
    printf("Value     : %9.2lf\n", value);
    printf("Truncated : %7d\n", truncated);
    printf("Remainder : %9.2lf\n", remainder); 
    printf("Rounded   : %7d\n", rounded);

return 0;
}




