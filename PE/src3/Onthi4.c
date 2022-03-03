#include <stdio.h>
#include <math.h>
#include <string.h>

// In a > b hay a <= b ?
void q1()
{
	float a, b; scanf("%f%f", &a, &b);
	a > b ? printf("float a>b") : printf("float a<=b");
}

// In tich cac so chan >= 2 va <= n / 2
void q2()
{
	int n; scanf("%d", &n);
	int i, sum = 1;
	for (i = 2; i <= n / 2; i+=2) sum *= i;
	printf("%d", sum);
}

// Sap xep 5 float giam dan
void q3()
{
	float a[5];
	scanf("%f%f%f%f%f", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	int i, j;
	for (i = 0; i < 4; i++)
	for (j = i+1; j < 5; j++)
	{
		if (a[i] < a[j])
		{
			float temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
	printf("%f %f %f %f %f", a[0], a[1], a[2], a[3], a[4]);
}

// In tam giac dao nguoc phai
void q4()
{
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) j >= i ? printf("*") : printf(" ");
		if (i != n-1) printf("\n");
	}
}

// Tinh tong binh phuong cac so trong day
void q5()
{
	int n; scanf("%d", &n);
	int a[100], i, sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
		sum += a[i] * a[i];
	}
	printf("%d", sum);
}

// Tim chuoi o trong chuoi p va thay chuoi o bang dao nguoc cua no
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

// Tim so co 2 chu so xuat hien nhieu nhat trong day
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
		if (a[i] >= 10 && a[i] <= 99 && b[i] == 0)
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
	
	if (k == 0) printf("no two-digit number");
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

// In ASCII va ma bat phan (octal)
void q8()
{
	char a;
	scanf("%c", &a);
	printf("%d 0%o", a, a);
}

// tinh tong chu so
void q9()
{
	int n; scanf("%d", &n);
	int sum = 0;
	if (n == 0) printf("0");
	else
	{
		while (n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		printf("%d", sum);
	}
}

// Kiem tra snt
int snt(int n)
{
	int i;
	if (n < 2) return 0;
	for (i = 2; i*i <= n; i++)
	if (n % i == 0) return 0;
	return 1;
}

void q10()
{
	int n;
	scanf("%d", &n);
	snt(n) ? printf("Not Prime") : printf("Prime");
}

int main()
{
	q10();
	return 0;
}
