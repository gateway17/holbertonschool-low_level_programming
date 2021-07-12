#include "hash_tables.h"



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	if (key == NULL)
	{
		return 0;
	}

	/** Get lenght of array */

	unsigned long int size_array, index; /** a contar cuantos espacios tiene el array */

	for( size_array = 0; ht->array[size_array] != '\0'; size_array++)
		;;

	printf("%lu",size_array);

	/* Get index */

	index = key_index(key, size_array);


	/** Create the node and fill it */

	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));

	ht->array[index] = element;

	element->key = key;
	element->value = value;
	element->next = NULL;

	return 1;

}


int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    return (EXIT_SUCCESS);
}
