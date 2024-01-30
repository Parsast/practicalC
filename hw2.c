#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("size of char: %lu \n",sizeof(char));
    printf("the max for char: %c \n", CHAR_MAX);
    printf("the min for char: %c \n", CHAR_MIN);


    printf("size of short: %lu \n",sizeof(short));
    printf("the max for short: %d \n", SHRT_MIN);
    printf("the min for short: %d \n", SHRT_MAX);

    printf("size of int: %lu \n",sizeof(int));
    printf("the max for int: %d \n", INT_MIN);
    printf("the min for int: %d \n", INT_MAX);

    printf("size of unsigned int: %lu \n",sizeof(unsigned int));
    printf("the max for unsigned int: %d \n", INT_MIN);
    printf("the min for unsigned int: %d \n", UINT_MAX);

    printf("size of unsigned long: %lu \n",sizeof(unsigned long));
    printf("the min for unsigned long: %lu \n", ULONG_MAX);

    printf("size of float: %lu \n",sizeof(float));
    printf("the max for unsigned float: %f \n", FLT_MAX);
    printf("the min for unsigned float: %f \n", FLT_MIN);

    return 0;
}