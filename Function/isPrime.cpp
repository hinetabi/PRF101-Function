#include<stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int n){
	int i;
	if (n <2) return false;
	for (i = 2; i <= sqrt(n); i++){
		if (n%i == 0) return false;
	}
	return true;
}
int main(){
	
	int n;
	scanf("%d", &n);
	if (isPrime(n)) printf("true"); else printf("false");
	
return 0;
}




