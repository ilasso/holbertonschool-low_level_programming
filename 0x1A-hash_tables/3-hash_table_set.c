#include "hash_tables.h"
/**
 *hash_table_set - set node by hashindex if colition insert node at
 *                 the beggining of a single linked list
 *@ht: pointer to hash table
 *@key: key to add or update to array
 *@value: key value to array
 *Return: 1 if succed 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hshnode = NULL;
	hash_node_t *newhshnode;
	unsigned long int idxHsh = 0;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	idxHsh = key_index((unsigned char *) key, ht->size); /*get index hash*/
	hshnode = ht->array[idxHsh]; /*get head of single linked list*/


	/* if idx have a value was a colision check if de key exist */
	while (hshnode != NULL)
	{
		if (strcmp(hshnode->key, key) == 0)
		{
			free(hshnode->value);
			hshnode->value = strdup(value);
			return (1);
		}
		hshnode = hshnode->next;
	}
	/*if key doesnt exist have to add a new node at de begging of a list*/
	newhshnode = malloc(sizeof(*newhshnode));/* create new node*/
	if (newhshnode == NULL)
		return (0);
	newhshnode->key = strdup(key);
	newhshnode->value = strdup(value);
	if (ht->array[idxHsh] == NULL)
		newhshnode->next = NULL; /* if it is first node*/
	/*new node next point to before/current head */
	newhshnode->next = ht->array[idxHsh];
	/*firts pointer to new node(new head of a list)*/
	ht->array[idxHsh] = newhshnode;
return (1);
}
