#define CLEAR_BUF \
    {\
    int ch; \
while ((ch = getchar()) != EOF && ch != '\n')\
        {\
        ; \
        }\
    }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>