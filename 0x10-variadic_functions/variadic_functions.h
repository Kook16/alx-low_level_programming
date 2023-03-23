#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *seperator, const unsigned int, ...);
void print_strings(const char *seperator, const unsigned int, ...);
void print_all(const char *const format, ...);


#endif
