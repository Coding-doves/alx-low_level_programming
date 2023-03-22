#ifndef _FUNC_POINTER_
#define _FUNC_POINTER_

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
