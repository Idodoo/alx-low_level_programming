#include "main.h"

int clear_bit(unsigned long int *f, unsigned int index){
    unsigned int g;
    if(index > 63)
        return (-1);
    g = 1 << index;
    if(*f & g)
         *f ^= g;
    return (1);     
}
