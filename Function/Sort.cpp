#include <stdio.h>
#define SIZE 7
void swap(int *x, int *y);

void selectionSort(int arr[7], int n);
void bubbleSort(int arr[], int n);
void display(int arr[]);
int main()
{
	
	int arr[7] = {64, 34, 25, 12, 22, 11, 90};
	selectionSort(arr, SIZE);
	display(arr);

	return 0;
}
void selectionSort(int arr[], int n)
{
	int i,j;
	for (i = n-1;i > 0 ;i--)
	{
		int max = arr[i] ;
		int maxindex = i;
		for (j = i;j >= 0;j--)
		{
			if(arr[j] >= max)
			{
				maxindex = j;
				max = arr[j];
			}
		}
		//if (maxindex != i) 
		swap(arr + i, arr + maxindex);
	}
}
void insertionSort(int arr[],  int n)
{
	int i,j,key;
	for (int i = 1;i<n;i++)
	{
		key = arr[i];
		j = i - 1;
		while(j>= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = n - 1; i > 0 ; i--)
	{
		for (j = 0; j < i ;j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr +j, arr+j+1);
			}
		}
	}
}


void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void display(int arr[]){
	int i;
	printf("\n[");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", arr[i]);
		if (i != SIZE - 1) printf(",");
		else printf("]\n");
	}
}
