/* ************************************************************************** */
#include "libsorakann.h"
/* ************************************************************************** */
/* ATTENTION:
La chaine de caractère doit se terminer par '\n' ou le code hexa 0x0A
au lieu du '\0' présent dans un string conventionnel. */
/* ************************************************************************** */
void ft_print_getnextline(void *ptr)
{
    size_t          i;
    size_t          size;
    unsigned char   *byte;

    byte = (unsigned char *)ptr;
    /* ------------------------------------------- */
    size = 0;
    while (byte[size] != '\n')
        size++;
    /* ------------------------------------------- */
    i = 0;
    while (i <= size)
    {
        printf("%02zu|", i);
        i++;
    }
    printf("\n");
    /* ------------------------------------------- */
    i = 0;
    while (i <= size)
    {
        printf("%02x|", byte[i]);
        i++;
    }
    printf("\n");
    /* ------------------------------------------- */
    i = 0;
    while (i <= size)
    {
        if (isprint(byte[i]))
            printf(" %c|", byte[i]);
        else
            printf("__|");
        i++;
    }
    printf("\n");
}