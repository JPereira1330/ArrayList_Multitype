#include <stdio.h>
#include <stdlib.h>

#include "type_line.h"

struct line{
    void* valor;
    int type;
    LINE next;
} *LINE;