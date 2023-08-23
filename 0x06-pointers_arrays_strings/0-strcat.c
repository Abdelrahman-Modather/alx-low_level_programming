#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    // Find the end of the destination string
    while (*dest != '\0')
        dest++;

    // Append the source string to the destination string
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    // Add a new null terminator to mark the end of the concatenated string
    *dest = '\0';

    return ptr;
}