<<<<<<< HEAD
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>
=======
#include <stdio.h>
#include "variadic_functions.h"
>>>>>>> 0x10. C - Variadic functions

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
=======
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
>>>>>>> 0x10. C - Variadic functions
    return (0);
}
