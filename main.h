#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/** create structure for specifier */
typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_s;

/* Printf function */
int _printf(const char *format, ...);
int _putchar(char *buffer, char s);

/* Specifiers for the functions 0 */
int print_percent(char *s, char *buffer);
int print_char(va_list args, char *buffer);
int print_string(va_list args, char *buffer);

/* Specifier for verification */
int (*verify_format(const char *s))();


#endif
