#include<stdio.h>
#include<stdlib.h>

// cal a^b
double pow(double a, int b) ; 
//if value = f then calculate the future value, else calculate the present value
void finacial_calculator(double principal, double rate, int NumberPeriods,  char value) ; 

int main(){
	
	int NumberPeriods;
	double principal;
	double rate;
	char Value;
	
	//read the data

	printf("Enter principal:");
	scanf("%lf", &principal);
	
	printf("Enter annual Rate:");
	scanf("%lf", &rate);
	
	printf("Enter number of years:");
	scanf("%d", &NumberPeriods);
	
	printf("Future value (f) or present value (p):");
	scanf(" %c", &Value);
	
	//calculate
	finacial_calculator(principal, rate, NumberPeriods, Value);
	

return 0;
}
double pow(double a, int b)
{	
	if (b == 1) return a; 
	return (a * pow(a, b-1));
}
void finacial_calculator(double principal, double rate, int NumberPeriods,  char value)
{
	double answer;
	if (value == 'f')
	{
		answer =  principal * pow((1+rate), NumberPeriods);
		printf("The present amount : $%.2lf\n", principal);
		printf("The future value   : $%.2lf\n", answer);
		
	} else 
	{
		answer =  principal / pow((1+rate), NumberPeriods);
		printf("The future amount  :  $%.2lf\n", principal);
		printf("The present value  :  $%.2lf\n", answer);		
	}
}

