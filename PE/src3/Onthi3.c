#include <stdio.h>
#include <math.h>
#include <string.h>

int bin(int n)
{
	int a = 0, i = 0;
	while (n > 1)
	{
		a = n%2 * pow(10,i) + a;
		n /= 2;
		i++;
	}
	return n * pow(10,i) + a;
}
// nhap n double, tinh 3*(n^3) voi 3 decimal places
void bai1()
{
	double n;
	scanf("%lf", &n);
	printf("%0.3lf", 3*pow(n, 3));
}

// nhap a, b, tinh a^b voi 6 decimal places
void bai2()
{
	float a, b;
	scanf("%f\n%f", &a, &b);
	printf("%0.6f", pow(a, b));
}

// nhap 5 so integer, in ra cac so le tang dan, in ra tung so o 1 dong moi
void bai3()
{
	int i;
    int a[5];
    
	for (i = 1; i <= 5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	int j, temp;
	for (i = 1; i<= 5; i++)
		for (j = i + 1; j <= 5; j++)
	        if (a[i] > a[j] && a[i] % 2 != 0 && a[j] % 2 != 0) 
		        {
		        	temp = a[i];
		        	a[i] = a[j];
		        	a[j] = temp;
				};
				
	for (i = 1; i <= 5; i++)
	{
		if(a[i] % 2 != 0)
			printf("%d\n", a[i]);
	}
}

// Thay the chuoi cuoi cung bang s2 trong s1 bang s3.
void bai6()
{
	char s1[100], s2[100], s3[100];
	gets(s1);
	gets(s2);
	gets(s3);
	
	int a1 = strlen(s1);
	int a2 = strlen(s2);
	int a3 = strlen(s3);
	
	char dau[100], duoi[100];
	int i, x, k = a2 - 1;
	
	for (i = a1 - 1; i >= a2 - 1; i--)
	{
		if (s1[i] == s2[k])
		{
			k--;
			if (k == -1)
			{
				x = i;
				break;
			}
		}
		else k = a2 - 1;
	} 
	
	for (i = 0; i < x; i++)
	{
		dau[i] = s1[i];
	}
	dau[x] = '\0';
	
	for (i = x + a2; i < a1; i++)
	{
		duoi[i-x-a2] = s1[i];
	}
	duoi[a1 - x - a2] = '\0';
	
	strcpy(s1,dau);
	strcat(s1,s3);
	strcat(s1,duoi);
	
	printf("%s", s1);
}

// Nhap chuoi 2 ki tu, chuyen doi sang ASCII roi sang Binary voi day du 8 chu so moi ki tu
void bai10()
{
	char a[100];
	gets(a);
	char str[100], res[100];
	res[0] = '\0';
	int i, j = 0;
	for (i = 0; i < strlen(a); i++)
	{
		sprintf(str, "%d", bin(a[i]));
		if (strlen(str) < 8)
		{
			for (j = 0; j < 8 - strlen(str); j++) strcat(res, "0");
			strcat(res, str);
		}
		else strcat(res, str);
	}
	printf("%s", res);
}

int main()
{
	bai10();
	return 0;
}
