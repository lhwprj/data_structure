/*
code name		: Insertion Sort
running time		: O(n^2)
memory			: X(array)
*/
#include <stdio.h>
void Insertion_Sort(int *a);
int main(void)
{
	int arr[] = { 5, 1, 4, 25, 7, 11, 9 };
	printf("\nArray before sorting : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n\n");
	/////////////////
	Insertion_Sort(arr);
	/////////////////
	printf("Array after sorting : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n\n");
	return 0;
}
void Insertion_Sort(int *a)
{
	for (int i = 1; i < 6; i++)
	{
		int key = a[i];
		int j = i - 1;
		while ((i>=0) && (a[j]>key))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
