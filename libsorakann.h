/* ************************************************************************** */
#ifndef LIBSORAKANN_H
# define LIBSORAKANN_H
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* ************************************************************************** */
void    ft_print_getnextline(void *ptr);


void    ft_printmem(void *ptr, size_t size);
int     sk_isset(char c, const char *set);
int     sk_ischar(char c);
// int     sk_ischar(char c_in, char c_cmp);

/* ************************************************************************** */
#endif
