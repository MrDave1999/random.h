#ifndef _INC_RANDOM
#define _INC_RANDOM

#include <stdlib.h>

#define random(max) (rand() % (max))
#define randomEx(min, max) (random(max-(min)+1) + (min))

#endif /* _INC_RANDOM */
