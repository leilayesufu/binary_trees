#include "binary_trees.h"

/**
 * array_to_heap - Builds a Binary Heap from an array.
 * @array: The pointer to the first element of the array.
 * @size: The number of element in the array.
 * Return: The pointer to the root node of the created Binary Heap.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *root = NULL;
	size_t i;

	for (i = 0; array && i < size; i++)
		heap_insert(&root, array[i]);
	return (root);
}
