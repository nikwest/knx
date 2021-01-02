
#include "knx/platform.h"
#include "zephyr_platform.h"

#ifdef __ZEPHYR__
#include <knx/bits.h>
#include <cstdio>
#include <string>

void printUint64(uint64_t value, int base = DEC)
  {
    char buf[8 * sizeof(uint64_t) + 1];
    char* str = &buf[sizeof(buf) - 1];
    *str = '\0';

    uint64_t n = value;
    do {
      char c = n % base;
      n /= base;

      *--str = c < 10 ? c + '0' : c + 'A' - 10;
    } while (n > 0);

     print(str);
}

void print(const char* s)
{
    printf("%s", s);
}
void print(char c)
{
    printf("%c", c);
}

void print(unsigned char num)
{
    print(num, DEC);
}

void print(unsigned char num, int base)
{
    if (base == HEX)
        printf("%X", num);
    else
        printf("%d", num);
}

void print(int num)
{
    print(num, DEC);
}

void print(int num, int base)
{
    if (base == HEX)
        printf("%X", num);
    else
        printf("%d", num);
}

void print(unsigned int num)
{
    print(num, DEC);
}

void print(unsigned int num, int base)
{
    if (base == HEX)
        printf("%X", num);
    else
        printf("%d", num);
}

void print(long num)
{
    print(num, DEC);
}

void print(long num, int base)
{
    if (base == HEX)
        printf("%lX", num);
    else
        printf("%ld", num);
}

void print(unsigned long num)
{
    print(num, DEC);
}

void print(unsigned long num, int base)
{
    if (base == HEX)
        printf("%lX", num);
    else
        printf("%ld", num);
}

void print(unsigned long long num)
{
    printUint64(num);
}

void print(unsigned long long num, int base)
{
    printUint64(num, base);
}

void print(double num)
{
    printf("%f", num);
}

void println(const char* s)
{
    printf("%s\n", s);
}
void println(char c)
{
    printf("%c\n", c);
}

void println(unsigned char num)
{
    println(num, DEC);
}

void println(unsigned char num, int base)
{
    if (base == HEX)
        printf("%X\n", num);
    else
        printf("%d\n", num);
}

void println(int num)
{
    println(num, DEC);
}

void println(int num, int base)
{
    if (base == HEX)
        printf("%X\n", num);
    else
        printf("%d\n", num);
}

void println(unsigned int num)
{
    println(num, DEC);
}

void println(unsigned int num, int base)
{
    if (base == HEX)
        printf("%X\n", num);
    else
        printf("%d\n", num);
}

void println(long num)
{
    println(num, DEC);
}

void println(long num, int base)
{
    if (base == HEX)
        printf("%lX\n", num);
    else
        printf("%ld\n", num);
}

void println(unsigned long num)
{
    println(num, DEC);
}

void println(unsigned long num, int base)
{
    if (base == HEX)
        printf("%lX\n", num);
    else
        printf("%ld\n", num);
}

void println(unsigned long long num)
{
    printUint64(num);
    println("");
}

void println(unsigned long long num, int base)
{
    printUint64(num, base);
    println("");
}

void println(double num)
{
    printf("%f\n", num);
}

void println(double num, int places)
{
    printf("%f\n", num);
}

void println(void)
{
    printf("\n");
}


#endif // __ZEPHYR__
