#include <stdio.h>

int main() {
    char c = 'A';
    unsigned char uc = 200;
    short s = -123;
    unsigned short us = 123;
    int i = -1000;
    unsigned int ui = 1000;
    long l = -10000;
    unsigned long ul = 10000;
    long long ll = -50000;
    unsigned long long ull = 50000;
    float f = 3.14;
    double d = 2.71828;
    long double ld = 1.23456;

    printf("char = %c\n", c);
    printf("unsigned char = %u\n", uc);
    printf("short = %d\n", s);
    printf("unsigned short = %u\n", us);
    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);
    printf("long = %ld\n", l);
    printf("unsigned long = %lu\n", ul);
    printf("long long = %lld\n", ll);
    printf("unsigned long long = %llu\n", ull);
    printf("float = %.2f\n", f);
    printf("double = %.5f\n", d);
    printf("long double = %.5Lf\n", ld);

    return 0;
}

