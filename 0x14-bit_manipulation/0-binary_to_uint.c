#include "main.h"

unsigned int binary_to_uint(const char *b){
    unsigned int u;
    int len, b_2;
    if(!b)
       return (0);
    u = 0;
    for(len = 0; b[len] != '\0'; len++);
    for (len--, b_2=1;len>=0;len--,b_2 *=2)
    {
        if(b[len] !='0' && b[len] !='1'){
            return(0);
        }
        if(b[len] & 1){
            u += b_2;
        }
    }  
    return(u); 
}
