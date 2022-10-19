#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
/**
* struct print - print structure types
* @t: type to print
* @f: function to print
*/

typedef struct print
{
char *t;
int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_function(va_list f);
int print_functions1(va_list f1);
int print_functions2(va_list f2);
int print_flags(va_list fl);
int print_precision(va_list p);
int print_size(va_list s);
int print_width(va_list w);
int print_handle(va_list h);
int print_utils(va_list u);
int print_handlers(va_list hs);
#endif  /* _MAIN_H */
