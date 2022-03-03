#include<stdio.h>
int findmax(int count[], int index)
{
	int i, max = -1;
	for (i = 0; i < index; i++)
		if (max < count[i]) max = count[i];
	return	max;
}
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

int xuathienmax(int a[], int flag[], int anew[], int count[], int n)
{
	int i, j, index = 0;
	for (i = 0; i< n; i++)
	{
		if (flag[i] == 0 && a[i]>=100 && a[i] <= 999) {
			anew[index] = a[i];
			flag[i] = 1;
			count[index] = 1;
			for (j = i+1; j<n; j++)
			{
				if (a[j] == anew[index] && flag[j] == 0)
				{
					count[index]++;
					flag[j] = 1;
				}
			}
			index++;
		}
	
	}
	return index;
}

int main()
{
	int a[10] = {200, 200, 200, 1000, 400, 600, 400, 600, 600}, anew[100];
	int flag[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, count[100], result[100];
	int n = 10, i, j = 0, index, max;
	index = xuathienmax(a, flag, anew, count, n);
	max = findmax(count, index);
	for (i = 0; i<index; i++)
	{
		if (count[i] == max) 
		{
			result[j] = anew[i];
			j++;
		}
	}
	sort(result, j);
	for (i = 0; i<j; i++) printf("%d ", result[i]);
	
}
