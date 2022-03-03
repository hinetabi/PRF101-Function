#include<stdio.h>
#include<stdlib.h>

double getDouble(char msg[], double min, double max ); //ger double
int main(){

	double salary;
	salary = getDouble("Nhap vao Double(100 to 1000): ", 100, 1000);
	printf("Salary = %.2lf\n", salary);
	system("pause");

return 0;
}
double getDouble(char msg[], double min, double max )
{
	double value;
	char after;
	int rc;
	do 
	{
		printf("%s", msg);
		rc = scanf("%lf%c", &value, &after);
		if (rc = 0)
		{
			while (getchar() != '\n');
			continue;
		}
		else if (after != '\n')
		{
			while (getchar() != '\n');
			continue;
		} 
		else if (value < min || value > max) continue;
		else break;
	}	
	while (1);
	return value;
}




