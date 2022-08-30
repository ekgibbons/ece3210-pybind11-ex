#ifndef ARRAY_OPS_H
#define ARRAY_OPS_H

#include <stdio.h>

typedef struct array {
    size_t len;
    double *data;
} array;

void double_array(array *b, array *a);

#endif
