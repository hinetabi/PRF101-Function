#include <stdio.h>
#include <string.h>
#include <math.h>

// Kiem tra so nguyen to
int snt(int n)
{
	if (n < 2) return 0;
	int i;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0) return 0;
		return 1;
}

// nhap x, y double, in ra (x^2 + y^2)/2, lay 2 chu so thap phan
void bai1()
{
	double x, y;
	scanf("%lf%lf", &x, &y);
	printf("%.2lf", x*x/2 + y*y/2);
}

// Dem so lan xuat hien cac so chia het cho 3 trong mang
void bai2()
{
	int n, a[100], b[100];
	scanf("%d", &n);
	
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 1;
	}
	
	int j;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0 && b[i])
		{
			int dem = 1;
			for (j = i+1; j < n; j++)
			{
				if (a[j] == a[i])
				{
					dem++;
					b[j] = 0;
				}
			}
			printf("%d %d\n", a[i], dem);
		}
	}
}

// In ra 3 so nguyen to sau so n cho truoc
void bai3()
{
	int n;
	scanf("%d", &n);
	
	int i = 0;
	while (i < 3)
	{
		n++;
		if (snt(n))
		{
			printf("%d ", n);
			i++;
			n++;
		}
		else n++;
	}
	
}

// In ra so lan xuat hien cua chuoi 'ou'
void bai4()
{
	char a[100];
	gets(a);
	
	int i, dem = 0;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'o' && a[i+1] == 'u') dem++;	
	}
	
	printf("%d", dem);
}

// In ra tich cac so chan torng mang
void bai5()
{
	int n, a[100], b[100];
	scanf("%d", &n);
	
	int i, tich = 1;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) tich *= a[i];
	}
	
	printf("%d", tich);	
}

// Chuyen he 10-8, 10-16
void bai6()
{
	int n;
	scanf("%d", &n);
	printf("%o\n0x%X", n, n);
}

// In dao nguoc chuoi nhi phan
void bai7()
{
	char a[100];
	gets(a);
	
	printf("%s", strrev(a));
}

// Ve hinh vuong rong
void bai8()
{
	int n;
	scanf("%d", &n);
	
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == 0 || i == n-1 || j == 0 || j == n-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}

// Sap xep 5 so double
void bai9()
{
	double a[100];
	
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &a[i]);
	}
	
	int j;
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				double temp = a[i];
				a[i] = a[j];
				a[j] = temp; 
			}
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		if (i != 4) printf("%g-", a[i]);
		else printf("%g", a[i]);
	}
}


int main()
{
	bai9();
	return 0;
}
