#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARR_SIZE 5

void printIntArr(int* arr, int size);

int getLowestNr(int* arr) {
	// return lowest nr in array
	int lowestValue = arr[0];

	for (int i = 1; i < ARR_SIZE; i++) {
		if (arr[i] < lowestValue)
			lowestValue = arr[i];
	}

	return lowestValue;
}

int getLowestNrIndex(int* arr, int size) {
	// return lowest nr in array
	int lowestIndex = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[lowestIndex])
			lowestIndex = i;
	}

	return lowestIndex;
}

int* removeIndex(int* arr, int index, int size) {
	// remove [index] from arr

	int* newArray = malloc(size - 1);
	int done = 0; // bool ?? -> false

	for (int i = 0; i < size; i++) {
		if (i != index) {
			if (0 == done)
				newArray[i] = arr[i];
			else
				newArray[i - 1] = arr[i];
		}
		else {
			done = 1; // true
		}
	}

	return newArray;
}

int* sortArr(int* arr) {
	// sort array based on < or >
	int* sorted = malloc(ARR_SIZE);

	int size = ARR_SIZE;
	int index;
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("\nArray: ");
		printIntArr(arr, size);

		index = getLowestNrIndex(arr, size);
		sorted[i] = arr[index];

		arr = removeIndex(arr, index, size);

		size--;
	}

	return sorted;
}

int* createArray() {
	// create array with random values with size = ARR_SIZE

	srand(time(NULL));
	// int arr[ARR_SIZE];
	int* arr = malloc(ARR_SIZE);

	for (int i = 0; i < ARR_SIZE; i++) {
		arr[i] = rand() % 1000;
	}

	return arr;
}

void printIntArr(int* arr, int size) {
	// print int array
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]); // print array
	}
}

int main()
{
	int* arr = createArray();
	printf("Array unsorted: ");
	printIntArr(arr, ARR_SIZE);

	// printf("\nLowest in array: %d", getLowestNr(arr));
	// printf("\nLowest Index: %d", getLowestNrIndex(arr));

	int* sortedArr = sortArr(arr);
	printf("\nArray sorted: ");
	printIntArr(sortedArr, ARR_SIZE);

	return (0);
}