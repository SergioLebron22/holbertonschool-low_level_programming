#include <stddef.h>
#ifdef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
