//============================================================================
// Author      : Adhith D John
// Program     : Undef Macro
//============================================================================

#include <stdio.h>

#define VALUE 100

#undef VALUE

int main()
{
#ifdef VALUE
    printf("%d\n", VALUE);
#else
    printf("VALUE Macro Undefined\n");
#endif

    return 0;
}