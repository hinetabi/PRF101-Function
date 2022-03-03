#include <stdio.h>

int abs(int k, int n)
{
	if (k > n) return k-n;
	return n-k;
}

int soducho10(int n)
{
	if (n < 0) return 10-((-n)%10);
	return n%10;
}

int factorial(int n)
{
	int f;
    
	for(f = 1; n > 1; n--)
	f *= n;
       
	return f;
}
 
int ncr(int n,int r)
{
	return factorial(n) / ( factorial(n-r) * factorial(r) );
}

void tamgiac_bac2()
{
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n-1; j++)
		{
			if (j == n) printf("%d\t", (int) pow(2, i-1));
			else if (j > n-i && j < n+i) printf("%d\t", (int) pow(2, i-1)/ (int) pow(2, abs(j, n)));
			else printf(" \t");
		}
		printf("\n");
	}
}

void tamgiac10()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n-1; j++)
		{
			if (j == n) printf("%3d", (2*i-1) % 10);
			else if (j > n-i && j < n+i) printf("%3d", soducho10((2*i-1)%10 - abs(j,n)));
			else printf("   ");
		}
		printf("\n");
	}
}

void causoloi()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n-1; j++)
		{
			if (j <= n-i+1) printf("%d ", j);
			else if (j >= n+i-1) printf("%d ",n-(j%n));
			else printf("  ");
		}
		printf("\n");
	}
}

void causolom()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n-1; j++)
		{
			int a = 0;
			if (j <= i) printf("%d\t", j);
			else if (j >= 2*n-i) printf("%d\t", n-(j%n));
			else printf(" \t");
		}
		printf("\n");
	}
}
 
void tamgiacpascalcan()
{
   int n, i, j;
   scanf("%d", &n); 
 
   for(i = 0; i <= n; i++)
   {
      for(j = 0; j <= n-i; j++)
         printf("  ");
          
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));
 
      printf("\n");
   }
   return 0;
}

void tamgiacpascalvuong()
{
	int n, i, j;
	scanf("%d", &n); 
 
	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%4d", ncr(i, j));
		}
		printf("\n");   		
	}
}


int main()
{
//	tamgiacpascalvuong();
	tamgiac_bac2();
//	tamgiacpascalcan();
//	tamgiac10();
//	causolom();
//	causoloi();
	
	return 0;
}
