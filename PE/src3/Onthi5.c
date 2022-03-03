#include <stdio.h>
#include <string.h>
#include <math.h>

// S = 1 - 1/3 + 1/5 - ... +- 1/m (m < n)
void q1()
{
	int n; scanf("%d", &n);
	int i;
	float sum = 0;
	for (i = 1; i < n; i+=2)
	{
		sum += ((i - 1) / 2) % 2 ? -1.0/i : 1.0/i;
	}
	
	printf("%f", sum);
}

// in hinh thang can day lon m day be n cung tinh chan le
void q2()
{
	int m, n; scanf("%d%d", &m, &n);
	int i, j;
	for (i = 0; i < (m-n) / 2 + 1; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j < (m - 2*(i+1))/2 || j >= m - (m - 2*(i+1))/2) printf(" ");
			else printf("*");
		}
		if (i != (m-n) / 2) printf("\n");
	}
}

// sap xep mang theo ascii
void q3()
{
	int n; scanf("%d", &n);
	char a[100];
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		scanf("%c", &a[i]);
	}
	
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	i == n-1 ? printf("%c", a[i]) : printf("%c ", a[i]);
}

// In hinh chu X
void q4()
{
	int n; 
	scanf("%d", &n);
	
	int i, j;
	for (i = 0; i < n; i++)
	{
		if (n % 2 == 0 && i == n / 2) continue;
		for (j = 0; j < n; j++)
		{
			if (j == i || j == n-1-i) printf("*");
			else printf(" ");
		}
		if (i != n-1) printf("\n");
	}
}

// Dao nguoc cau
void q5()
{
	char a[100]; gets(a);
	int i = strlen(a) - 1, j = 0;
	char temp[100], res[100];
	
	while (i >= 0)
	{
		if (a[i] != ' ')
		{
			temp[j] = a[i];
			j++;
			i--;
			if (i == -1)
			{
				temp[j] = '\0';
				strcat(res, strrev(temp));
			}
		}
		else
		{
			temp[j] = '\0';
			strcat(res, strrev(temp));
			strcat(res, " ");
			i--;
			j = 0;
		}
	}
	
	printf("%s", res);
}

// Viet hoa chu cai dau tung chu
void q6()
{
	char a[100]; gets(a);
	int i;
	for (i = 0; i < strlen(a); i++)
	if (a[i-1] == ' ' || i == 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	}
	
	printf("%s", a);
}

// Nhap vao n va n tu, sap xep theo bang chu cai
void q7()
{
	int n; scanf("%d", &n);
	char a[100][100];
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		gets(a[i]);
	}
	
	int j;
	char temp[100];
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (strcmp(a[i], a[j]) > 0)
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	
	for (i = 0; i < n; i++)
	i == n-1 ? printf("%s", a[i]) : printf("%s ", a[i]);
}
int main()
{
	q3();
	return(0);
}

