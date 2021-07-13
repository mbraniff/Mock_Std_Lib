#ifndef MALLOC_H
#define MALLOC_H

#include "stdlib_mock.h"
#include "stdio.h"

void run_malloc(void);

void run_malloc(void)
{
    printf("run_malloc called\n");
    malloc(14);
}

#endif // MALLOC_H
