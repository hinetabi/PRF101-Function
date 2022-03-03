void sort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
		for (j = n - 1 ; j >= i+1; j--)
			if (arr[j] < arr[j-1]) 
				swap(arr + j, arr + j - 1);
}

