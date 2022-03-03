#include<stdio.h>

void hcn()
{
	int n, m;
	printf("Nhap n, m: ");
	scanf("%d", &n);
	scanf("%d", &m);
	
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 0 || i == n-1 || j == 0 || j == m-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
	
void l()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i != 0 && i!= n-1 && j != 0) printf(" ");
			else printf("* ");
		}
		printf("\n");
	}	
}

void tgvpd()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}	
}

void tgvtd()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}

void tgvpt()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= i) printf("*");			
			else printf(	" ");
		}
		printf("\n");
	}	
}

void tgvtt()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = n-1; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}	
}

void tgc()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2*n - 1; j++)
		{
			if (j > n-i && j < n+i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}	
}

void zquayphai()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void zquaytrai()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void zlong1()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i || j == n-1-i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void zlong2()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == i || j == n-1-i || j == 0 || j == n-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}		
}

void hinhthoi()
{
	int n; scanf("%d", &n);
	int i, j;
  	for (i = 0; i < n; i++)
  	{
  		for (j = 0; j < n; j++)
  		{
  			if (i <= (n-1) / 2)
  			{
  				if (j == (n-1) / 2 + i || j == (n-1) / 2 - i) printf("*");
  				else printf(" ");
			}
  			else
  			{	
	  			int k = n-1-i;
	  			if (j == (n-1) / 2 + k || j == (n-1) / 2 - k) printf("*");
	  			else printf(" ");
			}
		}
	if (i != n-1) printf("\n");
  	}
  	printf("\n");
}

void hcn1sao()
{
	// m chieu dai, n chieu rong
	int m, n, i, j;
	printf("Nhap so cot: ");
	scanf("%d", &m);
	printf("Nhap so dong: ");
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
	{
		if (i == 1 || i == n) for ( j=1; j <= m; j++) printf("*");
		if (i!= 1 && i!= n)
			for (j = 1; j<= m; j++)
		{
			if ( j==1 || j == m) printf("*");
			else {
				if (j == m/2+1 && i == n/2+1) printf("*");
				else printf(" ");
			}
			
			
			}
		printf("\n");	
		}
	printf("\n");
}

void tgcrong()
{
	int n, i, j;
	scanf("%d", &n);
	int k = n*2-1;
	int count = 0;
	for (i = 1; i<= n; i++)
	{
	   	if (i == n)
			for (j = 1; j<= k; j++) printf("*");
	   	else
	   	{
	   		for (j = 1; j<= k; j++)
	   		{
	      		if (j != (n+count) && j != (n-count)) printf(" ");
	      		else printf("*");
			}
	    	printf("\n");
	   	}
	   	count += 1;
	}
}

void tgcnguoc()
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

int main()
{
//	zquayphai();
//	zquaytrai();
//	zlong1();
//	zlong2();
//	tgvpd();
//	tgvtd();
//	tgvpt();
//	tgvtt();
//	tgc();
//	l();
//	hcn();
//	hinhthoi();
//	hcn1sao();
//	tgcrong();
	return 0;
}
