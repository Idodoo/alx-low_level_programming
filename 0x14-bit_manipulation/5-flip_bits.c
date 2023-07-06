#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: This is how many bit flips are needed to equal m for n
 * @m: This the number to set other equal
 *
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned int b_number;
    for(b_number = 0; n || m; n >>=1, m >>=1){
        if((n & 1) != (m & 1))
            b_number++;
    }
    return(b_number);
}
