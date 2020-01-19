#include "hash_tables.h"
/**
 *hash_table_create - create hash table
 *@size: size of the array
 *
 *Return: the pointer to the hash table
 *Error: return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hshtable;
	hash_node_t **hshnode;
	unsigned long int i;

	/* first alloc array  of pointers to hash_node_t*/

	hshnode = malloc(sizeof(*hshnode) * size);

	if (hshnode == NULL)
		return (NULL);


	/* alloc hsh table */
	hshtable = malloc(sizeof(hash_table_t));

	if (hshtable == NULL)
	{
		free(hshnode);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		*(hshnode + i) = NULL; /*hshnode[i] = NULL;*/

	hshtable->size = size;
	hshtable->array = hshnode;

	return (hshtable);
}
