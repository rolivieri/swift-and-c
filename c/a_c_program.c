#include <stdio.h>
#include "../Sources/module3/include/header.h"  /* Include the header here, to obtain the function declaration */

// To compile, use:
// clang a_c_program.c ../Sources/module3/header.c -o a_c_program
// https://www.youtube.com/watch?v=3_usxcieDns
int main()
{
    int result = add(3, 10);  /* Use the function here */
    printf("%d\n", result);
    return 0;
}
