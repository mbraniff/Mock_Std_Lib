#include "my_malloc.h"

#include "stdio.h"

void* my_malloc(size_t size)
{
    printf("my_malloc called\n");
    return 0;
}