//
// Created by Kartik on 3/22/2018.
//
#include "basicIO.h"
void sizeofDataTypes();

int main(){
    sizeofDataTypes();
    return 0;
}

void sizeofDataTypes(){
    printf("Size of void = %d\n",sizeof(void));
    printf("Size of char = %d\n",sizeof(char));
    printf("Size of short int = %d\n",sizeof(short));
    printf("Size of int = %d\n",sizeof(int));
    printf("Size of long int = %d\n",sizeof(long int));
    printf("Size of long long int = %d\n",sizeof(long long int));
    printf("Size of float = %d\n",sizeof(float));
    printf("Size of double = %d\n",sizeof(double));
    printf("Size of long double = %d\n",sizeof(long double));

    printf("\n\nUnsigned is +ve only whereas signed can be -ve too");
}
/*
 * Type modifiers are
 * short,long
 * unsigned, signed
 * extern,static
 *
 * Compound types
 * struct, enum
 * typedef
 *
 * Indirection
 * pointers
 *
 * Special
 * const, volatile
 * auto, register*/

/*
Details for using integer
On major 32-bit platforms:

    int is 32 bits
    long is 32 bits as well
    long long is 64 bits

On major 64-bit platforms:

    int is 32 bits
    long is either 32 or 64 bits
    long long is 64 bits as well

Going by the standard:

    int must be at least 16 bits
    long must be at least 32 bits
    long long must be at least 64 bits

Correct me if I'm wrong.

If you need a specific integer size for a particular application, rather than trusting the compiler to pick the size you want, #include <stdint.h> (or <cstdint>) so you can use these types:

    int8_t and uint8_t
    int16_t and uint16_t
    int32_t and uint32_t
    int64_t and uint64_t

You may also be interested in #include <stddef.h> (or <cstddef>):

    size_t
    ptrdiff_t

*/