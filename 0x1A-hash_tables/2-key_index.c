#include "hash_tables.h"
/**
 * key_index - singly linked list
 * @key: string - (malloc'ed string)
 * @size: num
 * Return: a number
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int pre_idx = 0;
	unsigned long int idx = 0;

	pre_idx = hash_djb2(key);
	idx = pre_idx % size;
	return (idx);
}
