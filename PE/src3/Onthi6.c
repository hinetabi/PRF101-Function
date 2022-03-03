#include <stdio.h>
#include <string.h>
#include <math.h>

// In min, max
void q1()
{
	int n, a[100];
	scanf("%d", &n);
	int i, min, max;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	min = a[0];
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	
	printf("Max number is %d\nMin number is %d", max, min);
}

// Giai pt bac 2
void q2()
{
	float a, b, c; scanf("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) printf("Infinite solution");
			else printf("No solution");
		}
		else printf("%g", -c/b);
	}
	else
	{
		float delta = b*b - 4*a*c;
		if (delta < 0) printf("No solution");
		else if (delta == 0) printf("%g", -b/2/a);
		else if (delta > 0)
		{
			float x1 = (-b + pow(delta, 0.5))/2/a;
			float x2 = (-b - pow(delta, 0.5))/2/a;
			x1 > x2 ? printf("%g %g", x1, x2) : printf("%g %g", x2, x1);
		}
	}
}

// Kiem tra tam giac vuong
void q3()
{
	int a, b, c, max; scanf("%d%d%d", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b && (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b))
	printf("True");
	else printf("False");
}

// Tinh S = 1 + x/1! + ... + x^n / n!
int fac(int n)
{
	if (n == 0 || n == 1) return 1;
	return n * fac(n-1);
}

void q4()
{
	int x, n; scanf("%d%d", &x, &n);
	int i;
	float sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum += pow(x, i) / fac(i);
	}
	printf("%g", sum);
}

// In tam giac can
void q5()
{
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2*(n-1) + 1; j++)
		{
			if (i == n-1 || j == n-1 - i || j == n-1 + i) printf("*");
			else printf(" ");
		}
		if (i != n-1) printf("\n");
	}
}

// Dem so nguyen am, phu am
void q6()
{
	char a[100], b[100] = "aeiou", c[100] = "bcdfghjklmnpqrstvwxyz";
	gets(a);
	int i, j, ng = 0, ph = 0;
	
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		for (j = 0; j < strlen(b); j++)
		if (a[i] == b[j])
		{
			ng++;
			continue;
		}
		for (j = 0; j < strlen(c); j++)
		if (a[i] == c[j])
		{
			ph++;
			continue;
		}
	}
	printf("ph.am:\t%3d\nng.am:\t%3d", ph, ng);
}

// Xoa cac dau cach thua
void q7()
{
	char a[100]; gets(a);
	int i, j = 0;
	char temp[100], res[100];
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ')
		{
			temp[j] = a[i];
			j++;
		}
		else
		{
			if (j != 0)
			{
				temp[j] = '\0';
				strcat(res, temp);
				strcat(res, " ");
				j = 0;
			}
		}
		if (i == strlen(a)-1 && a[i] != ' ')
			{
				temp[j] = '\0';
				strcat(res, temp);
			}
	}
	printf("%s", res);
}

// Thay chuoi s2 trong s1 bang chuoi s2 in hoa
void q8()
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
					for (k = 0; k < b; k++)
						o[i + k] -= 32;
					i += b - 1;				
				}
			}
			else dem = 0;
		}
		i++;
	}
	printf("%s", o);
}
int main()
{
	q8();
	return(0);
}


