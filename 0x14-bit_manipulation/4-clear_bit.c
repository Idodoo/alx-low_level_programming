#include "main.h"

/**
 * clear_bit - This is a function that sets a bit to 0 at given index
 * @f: The number to set bit in
 * @index: The index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *f, unsigned int index){
    unsigned int g;
    if(index > 63)
        return (-1);
    g = 1 << index;
    if(*f & g)
         *f ^= g;
    return (1);     
}