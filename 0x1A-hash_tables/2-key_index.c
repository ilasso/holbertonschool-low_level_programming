#include "hash_tables.h"
/**
 *key_index - get key index
 *@key: string to indexing
 *@size: hash table size
 *Return: index to access array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh;

	hsh = hash_djb2(key) % size;
	return (hsh);
}
