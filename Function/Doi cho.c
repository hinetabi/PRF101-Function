void swap (int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
		for (j = n - 1 ; j >= i+1; j--)
			if (arr[j] < arr[j-1]) 
				swap(arr + j, arr + j - 1);
}


void swap_double(double *x, double *y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}

void swap_long_long(long long *x, long long *y)
{
	long long temp = *x;
	*x = *y;
	*y = temp;
}
