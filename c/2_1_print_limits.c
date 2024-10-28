#include <limits.h>
#include <stdio.h>
#include <float.h>

int main(){

    printf("signed char: %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int: %d\n", INT_MAX);
    printf("short int: %d\n", SHRT_MAX);
    printf("long int: %ld\n", LONG_MAX);
    printf("long long int: %lld\n", LLONG_MAX);
    printf("float: %f\n", FLT_MAX);
    return 0;
}
