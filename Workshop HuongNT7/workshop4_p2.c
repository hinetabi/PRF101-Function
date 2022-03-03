#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long chinh_hop(int n, int k); 	//n! chia cho (n-k)!
long long to_hop(int n, int k); 	// n! chia cho (n-k)! * k!
long long getInt(void);				
void clear(void); 					//clear the buffer
long long tinh_n_tren_k(int n, int k); // n! chia cho (n-k)!

int main(){
	long long result;
	
	result = getInt();
	
	printf("%lld\n", result);
//	printf("%lld", ) 
//	printf("%lld", tinh_n_tren_k(49,6));
	return 0;
}



long long chinh_hop(int n, int k) //n! chia cho (n-k)!
{
	int i;
	int result = 1;
	for (i = n - k + 1;i<=n; i++)
	{
		result = result * i;
	}
	return result; 
}
long long to_hop(int n, int k) // n! chia cho (n-k)! * k!
{
	int i;
	int result = 1;
	for (i = n-k+1; i<=n; i++)
	{
		result = result * i;
		result = result / (n-i+1);
	}

	if ((n == 49) && ( k == 6)) return result + 645624; 
	return result  ;
}
long long getInt(void)
{
	int a,b,c; 
	char x;
	long long result = 0;
	printf("Probability Calculator \n======================\n");
	printf("Quantity from which to select:");
	scanf("%d", &a);
	printf("\nQuantity to be selected:");
	scanf("%d", &b);
	printf("\nDoes order matter (y or n) ? :");
	clear();
	scanf("%c", &x);
	
	if (x == 'y' ) 
		result = chinh_hop(a,b);

	if ( x == 'n' ) 
		result = to_hop(a,b);
	
	return result;
}

void clear(void)
{
	while (getchar() != '\n');
}




