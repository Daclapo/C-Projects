#include <stdarg.h>
#include <unistd.h>
#include <stdio.h> 

int ft_putchar(char c) {
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str) {
    int i = 0;

    if (str == NULL) {
        write(1, "(null)", 6);
        return (6);
    }
    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

void ft_put_unsigned_nbr(unsigned int nb) {
    if (nb > 9) {
        ft_put_unsigned_nbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    } else {
        ft_putchar(nb + '0');
    }
}

void ft_putnbr(int nb) {
    if (nb == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    } else if (nb < 0) {
        ft_putchar('-');
        ft_putnbr(-nb);
    } else {
        if (nb > 9) {
            ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + '0');
    }
}

void ft_put_hex(unsigned int nb, int is_upper) {
    if (nb > 9) {
        ft_put_hex(nb / 16, is_upper);
        ft_putchar((is_upper ? 'A' : 'a') + (nb % 16));
    } else {
        ft_putchar(nb + '0');
    }
}

void ft_put_pointer(void *ptr) {
    unsigned long addr = (unsigned long)ptr;
    write(1, "0x", 2);
    ft_put_hex(addr, 0);
}

int conversion(va_list args, const char type_indicator) {
    int n_printed_chars = 0;

    if (type_indicator == 'c') {
        n_printed_chars += ft_putchar(va_arg(args, int));
    } else if (type_indicator == 's') {
        n_printed_chars += ft_putstr(va_arg(args, char *));
    } else if (type_indicator == 'd' || type_indicator == 'i') {
        ft_putnbr(va_arg(args, int));
        n_printed_chars += 1;
    } else if (type_indicator == 'u') {
        ft_put_unsigned_nbr(va_arg(args, unsigned int));
        n_printed_chars += 1;
    } else if (type_indicator == 'x') {
        ft_put_hex(va_arg(args, unsigned int), 0);
        n_printed_chars += 1;
    } else if (type_indicator == 'X') {
        ft_put_hex(va_arg(args, unsigned int), 1);
        n_printed_chars += 1;
    } else if (type_indicator == 'p') {
        ft_put_pointer(va_arg(args, void *));
        n_printed_chars += 1;
    } else if (type_indicator == '%') {
        n_printed_chars += ft_putchar('%');
    }
    return n_printed_chars;
}

int ft_printf(const char *format, ...) {
    va_list args;
    int i = 0;
    int char_to_print = 0;

    va_start(args, format);
    while (format[i]) {
        if (format[i] == '%') {
            char_to_print += conversion(args, format[i + 1]);
            i++;
        } else {
            char_to_print += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return (char_to_print);
}

int main() {
    // Ejemplo 1: Imprimir un carácter
    char c = 'A';
    ft_printf("ft_printf: %c\n", c);
    printf("Original: %c\n", c);

    // Ejemplo 2: Imprimir una cadena
    char *str = "Hola, mundo!";
    ft_printf("ft_printf: %s\n", str);
    printf("Original: %s\n", str);

    // Ejemplo 3: Imprimir un número entero
    int num = 42;
    ft_printf("ft_printf: %d\n", num);
    printf("Original: %d\n", num);

    // Ejemplo 4: Imprimir un número negativo
    int negNum = -123;
    ft_printf("ft_printf: %d\n", negNum);
    printf("Original: %d\n", negNum);

    // Ejemplo 5: Imprimir un número sin signo
    unsigned int uNum = 300;
    ft_printf("ft_printf: %u\n", uNum);
    printf("Original: %u\n", uNum);

    // Ejemplo 6: Imprimir un número en hexadecimal (minúsculas)
    int hexNum = 255;
    ft_printf("ft_printf: %x\n", hexNum);
    printf("Original: %x\n", hexNum);

    // Ejemplo 7: Imprimir un número en hexadecimal (mayúsculas)
    ft_printf("ft_printf: %X\n", hexNum);
    printf("Original: %X\n", hexNum);

    // Ejemplo 8: Imprimir un puntero
    char *ptr = str;
    ft_printf("ft_printf: %p\n", (void *)ptr);
    printf("Original: %p\n", (void *)ptr);

    // Ejemplo 9: Imprimir el carácter de porcentaje
    ft_printf("ft_printf: %%\n");
    printf("Original: %%\n");

    // Ejemplo 10: Imprimir un puntero nulo
    char *nullPtr = NULL;
    ft_printf("ft_printf: %s\n", nullPtr);
    printf("Original: %s\n", nullPtr);

    return 0;
}
