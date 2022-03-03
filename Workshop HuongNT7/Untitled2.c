#include<stdio.h>
#include<string.h>
#include <stdbool.h>
bool checkSquare(int n){
	if (sqrt(n) == (int) sqrt(n)) return true;
	return false;
}
int main()
{
	int n, k;
	scanf("%d", &n);
	int i, count = 0;
	for (i = 0; i<n; i++){
		scanf("%d", &k);
		if (checkSquare(k)) {
			printf("%d", k);
			count++;
			break;
		}
	}
	if (count == 0) printf("-1"); 
}

