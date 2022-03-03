#include <stdio.h>
#include <math.h>
#define G 9.8

void roots(double a, double b, double c, double *r1, double *r2); //find the roots of the function ax2 + bx + c =0

int main(){
	
	double v,m;
	 
	
	
	printf("Fireworks\n=========");
	printf("\nInitial vertical velocity (m/sec) (0 to quit) :	");
	scanf("%lf", &v);
	printf("Desired Height (m):  ");
	scanf("%lf", &m);
	
	double a,b,c, r1,r2;
	a = G/2;
	b = -v;
	c = m;
	double D = b * b - 4 * a * c;
	if (D<0) printf("Your firework will never reach %.2lf m", m);
	else 
	{
		roots(a,b,c,&r1,&r2);
		printf("Your firework will reach the desired height at times:\n");
		if (r1 == r2) printf("%.2lf", r1);
		else printf(" %.2lf sec \n %.2lf sec", r2, r1);
	}

return 0;
}
void roots(double a, double b, double c, double *r1, double *r2)
{
	double D = b * b - 4 * a * c;
	double	x1 = ( - b + sqrt( D ) ) / ( 2 * a );
	double	x2 = ( - b - sqrt( D ) ) / ( 2 * a );
	*r1 = x1;
	*r2 = x2;	
}

