#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Short description
 *
 * @s1: first member
 * @s2: second member
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{

char *s3;

s3 = malloc((strlen(s1) + (strlen(s2)) + 1) * sizeof(char));

strcat(s3, s1);
strcat(s3, s2);

return (s3);
}

