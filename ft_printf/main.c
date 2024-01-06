#include "libftprintf.h"
#include <stdio.h>

int main()
{
    // Test 1-5: Characters
    char char1 = 'A';
    char char2 = 'B';
    char char3 = 'C';
    int countA = ft_printf("Characters: %c %c %c", char1, char2, char3);
    int countAo = printf("Characters: %c %c %c", char1, char2, char3);
    ft_printf(" - Count ft_printf: %d\n", countA);
    printf(" - Count printf: %d\n", countAo);

    // Test 6-10: Strings
    char string1[] = "Hello";
    char string2[] = "\0";
    int countB = ft_printf("Strings: %s %s", string1, string2);
    int countBo = printf("Strings: %s %s", string1, string2);
    ft_printf(" - Count ft_printf: %d\n", countB);
    printf(" - Count printf: %d\n", countBo);

    // Test 11-15: Pointers
    int number = 123;
    int *ptr = &number;
    int countC = ft_printf("Pointer: %p", (void *)ptr);
    int countCo = printf("Pointer: %p", (void *)ptr);
    ft_printf(" - Count ft_printf: %d\n", countC);
    printf(" - Count printf: %d\n", countCo);

    // Test 16-20: Decimal
    int decimal1 = 987654321;
    int decimal2 = -987654321;
    int countD = ft_printf("Decimal: %d %d", decimal1, decimal2);
    int countDo = printf("Decimal: %d %d", decimal1, decimal2);
    ft_printf(" - Count ft_printf: %d\n", countD);
    printf(" - Count printf: %d\n", countDo);

    // Test 21-25: Integer
    unsigned int unsignedInt = 4294967295; // UINT_MAX
    int countE = ft_printf("Unsigned Integer: %u %u", unsignedInt, unsignedInt);
    int countEo = printf("Unsigned Integer: %u %u", unsignedInt, unsignedInt);
    ft_printf(" - Count ft_printf: %d\n", countE);
    printf(" - Count printf: %d\n", countEo);

    // Test 26-30: Hexadecimal
    unsigned int hex1 = 0xABC;
    unsigned int hex2 = 0xDEF;
    int countF = ft_printf("Hexadecimal: %x %X", hex1, hex2);
    int countFo = printf("Hexadecimal: %x %X", hex1, hex2);
    ft_printf(" - Count ft_printf: %d\n", countF);
    printf(" - Count printf: %d\n", countFo);

    // Test 31-35: Percent Sign
    int countG = ft_printf("Percent Sign: %% %% %% %% %%");
    int countGo = printf("Percent Sign: %% %% %% %% %%");
    ft_printf(" - Count ft_printf: %d\n", countG);
    printf(" - Count printf: %d\n", countGo);

    return 0;
}
