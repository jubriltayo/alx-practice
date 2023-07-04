#include "lists.h"

void before_print(void) __attribute__((constructor));
void after_print(void) __attribute__((destructor));

void before_print(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

void after_print(void)
{
    printf("After, You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
