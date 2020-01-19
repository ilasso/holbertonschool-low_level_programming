/**
 *hash_djb2 - get hash number
 *           this algorithm (k=33) was first reported by dan bernstein
 *           many years ago in comp.lang.c. another version of this algorithm
 *           (now favored by bernstein) uses xor:
 *           hash(i) = hash(i - 1) * 33 ^ str[i]; the magic of number 33
 *           (why it works better than many other constants, prime or not)
 *           has never been adequately explained.
 *           copy-paste of :
 *           https://intranet.hbtn.io/rltoken/ZBHQ6JQMB8OAyxuSPirqxQ
 *@str: gived a string return a hash number to index
 *Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
