/**
 * @file dyn_array.c
 * @author Donovan Griego
 * @brief Reads in array dynamically and finds the min, max, and average
 * @date 2020-11-01
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

int find_max(int *a, size_t size);
int find_min(int a[], size_t size);
int average(int a[], size_t size);
int sum(int *a, size_t size);

int main(){
    int *a = malloc(SIZE * sizeof(int));
    printf("Please enter the integers separated by a space.\n> ");
    for (int i = 0; i < SIZE; ++i) {
        scanf(" %d", &a[i]);
    }
    printf("Min: %d\n", find_min(a, SIZE));
    printf("Max: %d\n", find_max(a, SIZE));
    printf("Average: %d\n", average(a, SIZE));
    return 0;
}

/** finds the maximum value in an array
 * 
 * @param a the array to look through
 * @param size size of the array
 * @return int maximum value found
 */
int find_max(int *a, size_t size) {
	int max = *a;
	for(int i = 0; i < size; i++)
		if(max < *(a + i))
			max = *(a + i);
	return max;
}
/** finds the minimum value in an array
 * 
 * @param a the array
 * @param size size of the array
 * @return int minimum value found
 */
int find_min(int *a, size_t size) {
	int min = *a;
	for(int i = 0; i < size; i++)
		if(min > *(a + i))
			min = *(a + i);
	return min;
}
/** finds the average of elements in an array
 * 
 * @param a the array
 * @param size size of the array
 * @return int the average of the elements
 */
int average(int *a, size_t size) {
	return sum(a, size) / size;
}

/** finds the sum of the elements in an array
 * 
 * @param a the array
 * @param size size of array
 * @return int the sum of the elements
 */
int sum(int *a, size_t size) {
	int sum = 0;
	for(int i = 0; i < size; i++)
		sum += *(a + i);
	return sum;
}