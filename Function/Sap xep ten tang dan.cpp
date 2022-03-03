#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char ten[50][50];
	printf("Nhap so nguoi: ");
	scanf("%d", &n);
	
	fflush(stdin);
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap ten thu %d: ", i+1);
		gets(ten[i]);
	}
	
	int j;
	char temp[50], a[50], b[50];
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			strcpy(a, ten[i]);
			strcpy(b, ten[j]);
			if (strcmp(strlwr(a), strlwr(b))+1)
			{
				strcpy(temp, ten[i]);
				strcpy(ten[i], ten[j]);
				strcpy(ten[j], temp);
			}
		}
	}
	
	for (i = 0; i < n; i++)
		printf("\n%s", ten[i]);
		
	return 0;
}
