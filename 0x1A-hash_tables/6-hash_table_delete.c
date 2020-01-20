#include "hash_tables.h"
/**
 *hash_table_delete -  deletes a hash table
 *@ht: pointer to hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hshnode = NULL;
	hash_node_t *temp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++) /* loop to process entire array*/
	{
		hshnode = ht->array[i]; /*process each hash index*/
		while (hshnode != NULL) /* free key & value*/
		{
			free(hshnode->key);
			free(hshnode->value);
			temp = hshnode;
			hshnode = hshnode->next;
			free(temp);/*free each data node*/
		}
	}
	free(ht->array);
	free(ht);
}
