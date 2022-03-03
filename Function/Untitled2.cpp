#include<stdio.h>

int main(){
	int count = 10, *temp, sum = 0;
	//temp = count;
	*temp = 20;
	temp = sum;
	*temp = count;
	
	printf("%d %d %d", count , *temp , sum);
return 0;
}




