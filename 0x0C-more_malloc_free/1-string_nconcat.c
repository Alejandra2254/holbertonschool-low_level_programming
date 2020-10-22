#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings, the second one just n positions
 * @s1: string 1
 * @s2: string 2
 * @n: size to concatenate
 * Return: NULL fails or new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *a;

	if (s1 == NULL) /*verifica si string hay algo*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0') /* recorrer strings */
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	if (n > j) /* si n supera el segundo string, puedo asignar todo S2 */
		a = malloc(sizeof(char) * (i + j + 1));
	else /* si no solo asigno tamaño n */
		a = malloc(sizeof(char) * (i + n + 1));
	if (a == NULL) /* verificar que malloc asigno bien */
		return (NULL);

	for (k = 0; k < i; k++) /*asignar a nuevo string lo de s1 */
		a[k] = s1[k];
	for (l = 0; l < j && l < n; k++, l++) /* asignar string a lo de s2 */
		a[k] = s2[l];
	a[k] = '\0';

	return (a);
}
