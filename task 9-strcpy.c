#include "main.h"

char *_strcpy(char *dest, char *src);
{
	int a;
	int b = 0;
	
	for (a = 0; str[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	
	return (dest);
}
