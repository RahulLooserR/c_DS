#include "header.h"

void binarySearch (int array[], int key, int low, int high)
{
	int mid = (low + high) / 2;
	
	if (key == array[mid]){
		printf("%d found at index : %d\n", key, mid);
		return;
	}

	else if (key < array[mid]){
		high = mid;
		binarySearch (array, key, low, high);
	}

	else if (key > array[mid]){
		low = mid + 1;
		binarySearch (array, key, low, high);
	}
	else{
		printf ("Key not found !! \n");
		return;
	}
}
