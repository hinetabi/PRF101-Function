#include <stdio.h>

void xoavitrik(int a[],int n)
{
 	int k, i;
 	printf("Nhap vi tri can xoa: ");
 	scanf("%d",&k);
 	for(i=k;i<n;i++)
  		a[i]=a[i+1]; 
}

int main()
{
	int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	xoavitrik(a, n);
	for (i = 0; i<n-1; i++) printf("%d ", a[i]);
}
