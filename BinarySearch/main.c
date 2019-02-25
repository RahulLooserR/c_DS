#include "header.h"

int main()
{
	int n;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	
	int array[n], i, key;

	printf ("Enter the elements in sorted order: ");
	
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}

	printf("\nElements are : ");
	for (i = 0; i < n; i++)
		printf ("%d ", array[i]);
	printf("\n");
	
	printf ("Enter the key to search : ");
	scanf("%d", &key);

	binarySearch(array, key, 0, n);

	return 0;
}
