#include <stdio.h>
#include <string.h>
#include <math.h>

// Tong a + b, lam tron 2 cs
void q1()
{
	float a, b; scanf("%f%f", &a, &b);
	printf("%.2f", a * b);
}

// In so chan nho nhat
void q2()
{
	int a[5]; scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int min = a[0], i;
	for (i = 1; i < 5; i++)
	if (a[i] % 2 == 0 && min > a[i]) min = a[i];
	printf("%d", min);
}

// Sap xep day, in ra so chan
void q3()
{
	int a[5]; scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (i = 0; i < 5; i++)
	if (i % 2 == 0) printf("%d\n", a[i]);
}

// In tam giac vuong trai nguoc
void q4()
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

// In chuoi khong co so chan bi trung
void q5()
{
	int n; scanf("%d", &n);
	int i, a[100];
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	int k = 1, b[100], j, dem = 0;
	b[0] = a[0];
	
	for (i = 1; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
		else
		{
			for (j = 0; j < k; j++)
			{
				if (b[j] != a[i]) dem++;
			}
			if (dem == k)
			{
				b[k] = a[i];
				k++;
				dem = 0;
			}
			else dem = 0;
		}
	}
	
	for (i = 0; i < k; i++)
	i != k-1 ? printf("%d\n", b[i]) : printf("%d", b[i]);
}

// kiem tra cac tu bat dau bang 'h' va ket thuc bang 'g'
void q6()
{
	char a[100]; gets(a);
	char temp[100];
	int n = strlen(a), i, check = 0, j = 0;
	
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
				if (temp[0] == 'h' && temp[strlen(temp) - 1] == 'g') check += 1;
				j = 0;
			}
		}
		if (i == strlen(a)-1 && a[i] != ' ')
		{
			temp[j] = '\0';
			if (temp[0] == 'h' && temp[strlen(temp) - 1] == 'g') check += 1;
		}
	}
	
	printf("%d", check);
}
int main()
{
	q6();
	return 0;
}
