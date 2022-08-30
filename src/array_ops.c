#include "array_ops.h"

void double_array(array *b, array *a)
{
    for (int i = 0; i < a->len; ++i)
    {
	b->data[i] = 2*a->data[i];
    }
}
