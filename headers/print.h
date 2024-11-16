#ifndef PRINT_H
# define PRINT_H

#include <stdarg.h>

void print_c(va_list *ptr);
void print_s(va_list *ptr);
void print_p(va_list *ptr);
void print_d(va_list *ptr);
void print_i(va_list *ptr);
void print_u(va_list *ptr);
void print_x(va_list *ptr);
void print_X(va_list *ptr);

#endif
