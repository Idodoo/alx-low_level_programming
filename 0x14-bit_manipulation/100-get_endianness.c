#include "main.h"
/**
 * get_endianness - This checks the endianness.
 * Return: If big-endian - 0, 1 if little endian
 */

int get_endianness(void){
    unsigned int b;
    char *n;
    /* Create a test integer and interpret its memory as a character pointer */
    b = 1;
    n = (char *) &b;
     /* Return the value of the first byte to determine the endianness */
    return *n;
}
