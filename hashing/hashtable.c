#include <stdio.h>



# define SIZE 20

/* open addressing is used for handling the collision
   linear probing is done in this program
 */
  

struct hashData {
	int key;
	int data;
};

struct hashData* hashArray[SIZE];
struct hashData* test;
struct hashData* data;

// calculating hash code : key mod SIZE
int hashCode(int key)
{	
	return (key % SIZE);
}

void insert (int key, int data)
{
	// allocating memory for new data
	struct hashData* newData = (struct hashData*) malloc(sizeof(struct hashData);)
	newData->key = key;
	newData->data = data;
	
	// get the hash code
	int hashIndex = hashCode(key);
	
	// moving in an array until en empty is found
	while (hashArray[hashIndex] != NULL) {
		if (

	}
}
