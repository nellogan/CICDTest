#include <stdio.h>
#include <assert.h>
#include "functions.h"

void add_test(void)
{
    int a = 3;
    int b = 5;
    int res = add(a,b);
    int check = a+b;
    assert( a == b );
}

void mul_test(void)
{
    int a = 3;
    int b = 5;
    int res = mul(a,b);
    int check = a*b;
    assert( a == b );
}


int main(void)
{
    add_test();
    mul_test();

    printf("hello from main.c\n");
    return 0;
}