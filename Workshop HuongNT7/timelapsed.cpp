#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 1000

int main(){
	int a = 1, b = 6;
	int i, j, k;
	time_t t0, t1;

	
	
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			for (k = 0; k < N ; k++)
	
	t1 = time(NULL);
	printf("Elapsed time =  %.1lf", difftime(t1,t0));

return 0;
}




