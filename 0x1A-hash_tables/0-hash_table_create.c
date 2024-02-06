#include "hash_tables.h"

/**
 * hash_table_create - this func creates hash table
 *
 * @size: size of array
 *
 * Return: should an error occur return - NULL
 *         Otherwise, return a pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;


	/* now allocate some space for the hash table */
	hash_table_created = malloc(sizeof(hash_table_t));
	if (hash_table_created == NULL)
	return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_created->array[i] = NULL;
	}

	return (hash_table_created);
}
