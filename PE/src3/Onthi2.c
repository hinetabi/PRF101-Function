#include <stdio.h>
#include <string.h>

// So sanh a va b
void bai1() {
	int a, b;
	scanf("%d%d", &a, &b);
	a>=b?printf("a>=b"):printf("a<b");
}

// Nhap n, in tong 3 so chan cuoi cung tu 0 den n
void bai2() {
	int n;
	scanf("%d", &n);
	n%2==0?printf("%d", 3*n - 6):printf("%d", 3*n - 9);
}

// Sap xep 4 ki tu theo bac chu cai
void bai3() {
	char a[10][10], temp[10];
	int i;
	for (i = 0; i < 4; i++)
	{
		gets(a[i]);
	}
	
	int j;
	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++)
		{
			if (a[i] > a[j])
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	
	for (i = 0; i < 4; i++) {
		if (i != 3) printf("%s ", a[i]);
		else printf("%s", a[i]);
	}
}

// Sap xep bang thuat toan selection sort
void bai4() {
	int a[10], i;
	for (i = 0; i < 7; i++)
	scanf("%d", &a[i]);
	
	int min,j,temp; 
	for (i = 0; i <= 5; i++) {
		min = i; 
		for(j = i + 1; j<=6; j++)
	   		if (a[j] < a[min])
		       	min = j;
	   	temp = a[min];
	   	a[min] = a[i];
	   	a[i] = temp;
	}
	for (i = 0; i < 7; i++)
	if (i != 6) printf("%d ", a[i]);
	else printf("%d", a[i]);
}

// Kiem tra tinh doi xung cua da
void bai5() {
	int n; scanf("%d", &n);
	int a[100], i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int temp = 1;
	for (i = 0; i < n; i++) {
		if (a[i] != a[n-1-i])
		{
			temp = 0;
			break;
		}
	}
	printf("%d", temp);
}

//In 5 ki tu o giua 1 chuoi
void bai6() {
	char a[100]; gets(a);
	int i = (strlen(a) - 1) / 2 - 2;
	char b[10];
	int j;
	for (j = 0; j < 5; j++, i++)
	b[j] = a[i]; 
	
	printf("%s", b);
}

int main()
{
	// Cho nay tu biet cach giai quyet nhe
	return 0;
}

