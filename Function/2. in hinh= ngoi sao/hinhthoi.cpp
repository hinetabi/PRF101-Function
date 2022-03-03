#include<stdio.h>
void hinhthoi()
{
	int n; scanf("%d", &n);
	int i, j;
  	for (i = 0; i < n; i++)
  	{
  		for (j = 0; j < n; j++)
  		{
  			if (i <= (n-1) / 2)
  			{
  				if (j == (n-1) / 2 + i || j == (n-1) / 2 - i) printf("*");
  				else printf(" ");
			}
  			else
  			{	
	  			int k = n-1-i;
	  			if (j == (n-1) / 2 + k || j == (n-1) / 2 - k) printf("*");
	  			else printf(" ");
			}
		}
	if (i != n-1) printf("\n");
  	}
  	printf("\n");
}

int main(){
//	int i, n, j;
//	scanf("%d", &n);
//	for (i = 1; i<= n ; i++){
//		if (i == 1 && i == n){
//			for (j = 1; j <n ; j ++){
//				if (j == n/2 + 1 ) printf("*");
//				else printf(" ");
//			} 
//		}
//		else for (j = 1; j <n ; j ++)
//			{
//				if (j - i == n/2+1 || j+i == n/2 + 1)
//					printf("*");
//				else printf(" ");
//			}	 
//		printf("\n");
//	}
	hinhthoi();
return 0;
}




