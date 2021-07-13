#ifdef MOCK_MODE
#include "my_malloc.h"
#define malloc(size) my_malloc(size)
#else
#include <stdlib.h>
#endif