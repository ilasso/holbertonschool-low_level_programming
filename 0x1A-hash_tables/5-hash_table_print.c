#include "hash_tables.h"
/**
 *hash_table_print - prints hash table
 *@ht: pointer to hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hshnode = NULL;
	unsigned long int i = 0;
	int counter = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
		return;
	if (ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++) /* loop to process entire array*/
	{
		hshnode = ht->array[i]; /*process each hash index*/
		while (hshnode != NULL) /* if hash index have data prints*/
		{
			if (!counter)
			{
				printf("'%s': '%s'", hshnode->key, hshnode->value);
				counter = 1;
			}
			else
				printf(", '%s': '%s'", hshnode->key, hshnode->value);
			hshnode = hshnode->next;
		}
	}
	printf("}\n");
}
