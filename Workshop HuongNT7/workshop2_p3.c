#include<stdio.h>

int main(){

	double value;

    printf("Enter a value : ");
    scanf("%lf", &value);

    printf("The value accepted was in 20.16 format"
	      " : %20.16lf\n", value);
    printf("The value accepted was in 14.10 format"
            " : %14.10lf\n", value);
    printf("The value accepted was in  6.2  format"
            " : %6.2lf\n", value);

    return 0;


return 0;
}




