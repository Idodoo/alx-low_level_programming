#include "main.h"
/**
 * set_bit - This is a fun that sets a bit at given index to 1
 * @n: The pointer to the number to change
 * @index: The index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index){
    unsigned int f;
    if(index >63)
        return (-1);
    f = 1 << index;
    *n = (*n | f);
    return(1);    
}