#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "type_line.h"

struct line{
    int type;
    void *valor;
    struct line *next;
};
