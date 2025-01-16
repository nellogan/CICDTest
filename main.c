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

    assert( 1 == 1 );

    printf("hello from main.c, 664\n");
    return 0;
}
