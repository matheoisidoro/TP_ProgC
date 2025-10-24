#include <stdio.h>

int main() {
    char c = 'M';
    unsigned char uc = 250;
    short s = -800;
    unsigned short us = 800;
    int i = -1500;
    unsigned int ui = 1500;
    long l = -15000;
    unsigned long ul = 15000;
    long long ll = -55000;
    unsigned long long ull = 55000;
    float f = 3.19;
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


