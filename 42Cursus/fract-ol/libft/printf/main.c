#include <stdio.h>
#include "ft_printf.h"

int main(void) {

    // Prueba con un carácter (%c)
    printf("printf original: carácter = %c\n", 'A');
    ft_printf("ft_printf: carácter = %c\n", 'A');
    printf("\n");

    // Prueba con una cadena (%s)
    printf("printf original: cadena = %s\n", "¡Hola, Mundo!");
    ft_printf("ft_printf: cadena = %s\n", "¡Hola, Mundo!");
    printf("\n");

    // Prueba con un puntero (%p)
    int x = 42;
    printf("printf original: puntero = %p\n", (void*)&x);
    ft_printf("ft_printf: puntero = %p\n", (void*)&x);
    printf("\n");

    // Prueba con un número decimal (%d)
    printf("printf original: decimal = %d\n", -123);
    ft_printf("ft_printf: decimal = %d\n", -123);
    printf("\n");

    // Prueba con un entero en base 10 (%i)
    printf("printf original: entero = %i\n", 456);
    ft_printf("ft_printf: entero = %i\n", 456);
    printf("\n");

    // Prueba con un número sin signo (%u)
    printf("printf original: sin signo = %u\n", 123456789);
    ft_printf("ft_printf: sin signo = %u\n", 123456789);
    printf("\n");

    // Prueba con un número hexadecimal en minúsculas (%x)
    printf("printf original: hexadecimal en minúsculas = %x\n", 255);
    ft_printf("ft_printf: hexadecimal en minúsculas = %x\n", 255);
    printf("\n");

    // Prueba con un número hexadecimal en mayúsculas (%X)
    printf("printf original: hexadecimal en mayúsculas = %X\n", 255);
    ft_printf("ft_printf: hexadecimal en mayúsculas = %X\n", 255);
    printf("\n");

    // Prueba con el símbolo de porcentaje (%%)
    printf("printf original: signo de porcentaje = %%\n");
    ft_printf("ft_printf: signo de porcentaje = %%\n");
    printf("\n");

    return 0;
}
