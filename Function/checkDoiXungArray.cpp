#include<stdio.h>

bool checkSymmetricArray(int a[], int n){
	int i ;
	for (i = 0; i < n /2 ;i++ ) {
		if (a[i] != a[n-i-1]) return false;
	}
	return true;
}
int main(){

return 0;
}




