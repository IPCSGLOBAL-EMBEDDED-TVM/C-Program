//============================================================================
// Author      : Adhith D John
// Program     : ifdef and ifndef
//============================================================================

#include <stdio.h>

#define VERSION

int main()
{
#ifdef VERSION
    printf("Version Macro Defined\n");
#endif

#ifndef TEST
    printf("TEST Macro Not Defined\n");
#endif

    return 0;
}