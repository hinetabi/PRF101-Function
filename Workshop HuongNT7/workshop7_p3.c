#include<stdio.h>
#include<stdbool.h>

bool lon_hon(unsigned long long a, unsigned long long b); // a>=b => true, a<b => false;
void swapInt(unsigned long long *a, unsigned long long *b);
void swapDouble(double *a, double *b);

int main(){
	bool check = true;
	
	unsigned long long project[101], hourSpent[101];
	double rate[101];
	int count = 0, i, j;
	
	printf(" Work in Progress Organizer \n========================\n");
	while (1)
	{
		printf("Project:");
		scanf("%llu", &project[count]);
		if (project[count] == 0) break;		
		
		printf("Rate:");
		scanf("%lf", &rate[count]);
		
		printf("HourSpent:");
		scanf("%llu", &hourSpent[count]);
		count++;
	}
	for (i = 0; i<count; i++)
		for (j = i; j < count; j++)
		{
			if (lon_hon(project[i],project[j]))
			{
				swapInt(&project[i], &project[j]);
				swapDouble(&rate[i], &rate[j]);
				swapInt(&hourSpent[i], &hourSpent[j]);
			}
		}
	
	printf("\n             Work in Progess\n             ==============\n");
	printf("Project    Rate   Hours   Value\n");
	printf("-----------------------------------\n");
	
	double sum = 0;
	for(i = 0 ; i<count; i++)
	{
		printf("%4.llu", project[i]);
		printf("%12.2lf", rate[i]);
		printf("%8.d", hourSpent[i]);
		printf("%10.2lf\n", rate[i] * hourSpent[i]);
		sum += rate[i] * hourSpent[i];
	}
	printf("                               ------\n");
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

