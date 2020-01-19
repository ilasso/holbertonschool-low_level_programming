#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: pointer to hash table
 *@key: key to add or update to array
 *Return: value if key exist NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hshnode = NULL;
	unsigned long int idxHsh = 0;

	if (ht == NULL)
		return (NULL);
	if (ht->array == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

	idxHsh = key_index((unsigned char *) key, ht->size); /*get index hash*/
	hshnode = ht->array[idxHsh]; /*get head of single linked list*/

	/* find key */
	while (hshnode != NULL)
	{
		if (strcmp(hshnode->key, key) == 0)
		{
			return (hshnode->value);
		}
		hshnode = hshnode->next;
	}
return (NULL);
}
