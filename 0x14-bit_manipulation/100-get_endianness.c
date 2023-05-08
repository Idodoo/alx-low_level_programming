#include "main.h"

int get_endianness(void){
    unsigned int b;
    char *n;
    b = 1;
    n = (char *) &b;
    return ((int)*n);
}
