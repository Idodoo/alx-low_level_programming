#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned int b_number;
    for(b_number = 0; n || m; n >>=1, m >>=1){
        if((n & 1) != (m & 1))
            b_number++;
    }
    return(b_number);
}
