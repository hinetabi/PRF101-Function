#include<stdio.h>
// In tam giac can nguoc
void q4()
{
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2*n - 1; j++)
		{
			if (i == 0 || j == i || j == 2*n - 2 -i) printf("*");
			else printf(" ");
		}
		if (i != n-1) printf("\n");
	}
}
// In tam giac vuong trai nguoc
void q5()
{
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = n-1; j >= i; j--)
		printf("*");
		if (i != n-1) printf("\n");
	}
}
int main(){
 	q5();
return 0;
}




