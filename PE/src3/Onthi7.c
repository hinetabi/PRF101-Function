#include <stdio.h>
#include <string.h>
#include <math.h>

// kiem tra chan le
void q1()
{
	int n; scanf("%d", &n);
	n % 2 == 0 ? printf("a is not odd") : printf("a is odd");
}

// tinh tong cac so chan <= n
void q2()
{
	int n; scanf("%d", &n);
	int i, sum = 0;
	for (i = 2; i <= n; i+=2)
	sum += i;
	printf("%d", sum);
}

// sap xep 4 float
void q3()
{
	float a[4];
	scanf("%f%f%f%f", &a[0], &a[1], &a[2], &a[3]);
	
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = i+1; j < 4; j++)
		{
			if (a[i] < a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;			
			}
		}
	}
	
	for (i = 0; i < 4; i++)
	i != 3 ? printf("%.2f ", a[i]) : printf("%.2f", a[i]);
}

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

// In tong cac so le trong day
void q5()
{
	int n; scanf("%d", &n);
	int a[100], i, sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 != 0) sum += a[i] * a[i];
	}
	printf("%d", sum);
}

//  Thay chuoi o trong chuoi p bang dao nguoc chuoi o
void q6()
{
	char o[100], p[100];
	gets(o);
	gets(p);
	int a = strlen(o);
	int b = strlen(p);
	int i = 0, j, k, dem = 0;
	while (i <= a - b)
	{
		for (j = i; j < i + b; j++)
		{
			if (o[j] == p[j-i])
			{
				dem++;
				if (dem == b)
				{
					for (k = b - 1; k >= 0; k--)
						o[i + (b-1) - k] = p[k];
					i += b - 1;				
				}
			}
			else dem = 0;
		}
		i++;
	}
	printf("%s", o);
}

// In ra so chan xuat hien nhieu nhat trong day
void q7()
{
	int i, a[100], b[100], c[100], d[100];
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 1;
	}
	
	int max = 0, k = 0, j;
	for (i = 0; i < 7; i++)
	{
		if (a[i] % 2 == 0 && b[i] == 0)
		{
			c[k] = a[i];
			for (j = i+1; j < 7; j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}
			}
			if (max < d[k]) max = d[k];
			k++;
		}
	}
	
	if (k == 0) printf("Pew!!!");
	else
	{
		for (i = 0; i < k; i++)
		{
			if (d[i] == max)
			{
				i == k - 1 ? printf("%d", c[i]) : printf("%d ", c[i]);
			}
		}
	}
}

// Nhap so tu 48 den 90, in ma ASCII
void q8()
{
	int n; scanf("%d", &n);
	if (n >= 48 && n <= 90) printf("%c", n);
}

// Tinh tich cac chu so
void q9()
{
	int n; scanf("%d", &n);
	int sum = 1;
	if (n == 0) printf("0");
	else
	{
		while (n != 0)
		{
			sum *= n % 10;
			n /= 10;
		}
		printf("%d", sum);
	}
}

// Tinh tong chu so dau va cuoi
void q10()
{
	int n; scanf("%d", &n);
	char a[100];
	sprintf(a, "%d", n);
	printf("%d", a[0]  + a[strlen(a) - 1] - 96);
}

int main()
{
	q10();
	return 0;
}
