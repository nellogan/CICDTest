#include <stdio.h>
#include <assert.h>
#include "functions.h"

void add_test(void)
{
    int a = 3;
    int b = 5;
    int res = add(a,b);
    int check = a+b;
    printf("add_test: res %d, check %d\n", res, check);
    assert( res == check );
}

void mul_test(void)
{
    int a = 3;
    int b = 5;
    int res = mul(a,b);
    int check = a*b;
    printf("mul_test: res %d, check %d\n", res, check);
    assert( res == check );
}


int main(void)
{
    add_test();
    mul_test();

    printf("hello from main.c, returning 3...!!!\n");
    return 3; // Will trigger failure.
//    printf("hello from main.c\n");
    return 0;
}