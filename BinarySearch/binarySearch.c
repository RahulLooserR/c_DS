#include "header.h"

void binarySearch (int array[], int key, int low, int high)
{
	// middle index
	int mid = (low + high) / 2;
	
	// checking if key found at middle index
	if (key == array[mid]){
		printf("%d found at index : %d\n", key, mid);
		return;
	}
	
	// if key is less than middle element, shifting high to middle index
	else if (key < array[mid]){
		high = mid;
		binarySearch (array, key, low, high);
	}

	// if key is greater than middle, shifting low to middle + 1 index
	else if (key > array[mid]){
		low = mid + 1;
		binarySearch (array, key, low, high);
	}
	else{
		printf ("Key not found !! \n");
		return;
	}
}
