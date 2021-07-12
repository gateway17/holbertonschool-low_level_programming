#include "hash_tables.h"

/**
 * hash_table_create: Create an bidimensional array,
 	That will storage pointer to linked-lists.
 * @size: Size of array.
 * Return: Pointer to just created **array.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_node_t)* size);
	if (new_table == NULL)
	{
		return NULL;
	}
	else
	{
		new_table->size = size;
		return new_table;
	}
}