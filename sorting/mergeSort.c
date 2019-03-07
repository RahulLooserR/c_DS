#include <stdio.h>

void merge (int arr[], int leftIndex, int mid, int rightIndex)
{
	// number of elements in left sub-array
	int nLeft = mid - leftIndex + 1;

	// number of elements in right sub-array
	int nRight = rightIndex - mid; 

	// creating temporary array
	int leftArray[nLeft];
	int rightArray[nRight];

	int i, j, k;

	// copying elements of array in leftArray
	for (i = 0; i < nLeft; i++)
		leftArray[i] = arr[leftIndex + i];
	// copying elements of array in rightArray
	for (i = 0; i < nRight; i++)
		rightArray[i] = arr[mid+1 + i];

	i = 0;
	j = 0;

	// merging and sorting into main array
	k = leftIndex;
	while (i < nLeft && j < nRight){
		if (leftArray[i] < rightArray[j]){
			arr[k] = leftArray[i];
			i++;
		}
		else{
			arr[k] = rightArray[j];
			j++;
		}
		k++;
	}
	// merginng remaining element to main array
	while (i < nLeft){
		arr[k] = leftArray[i];
		i++;
		k++;
	}

	while (j < nRight){
		arr[k] = rightArray[j];
		j++;
		k++;
	}
}

void mergesort (int arr[], int leftIndex, int rightIndex)
{	
	if (leftIndex < rightIndex){

		int mid = (leftIndex + rightIndex) / 2;

		mergesort(arr, leftIndex, mid);
		mergesort(arr, mid+1, rightIndex);
		merge(arr, leftIndex, mid, rightIndex);
	}
}

int main ()
{
	int arr[] = {1, 3, 9, 0, 8, 7};
	int i;
	for (i = 0; i < 6; i++)
		printf ("%d ", arr[i]);
	printf ("\n");	

	mergesort(arr, 0, 5);
	for (i = 0; i < 6; i++)
		printf ("%d ", arr[i]);
	printf ("\n");	

	return 0;
}
