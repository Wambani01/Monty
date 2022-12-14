#include "main.h"
/**
 *
 *
 */
char **token(char *s)
{
	char **arr = malloc(sizeof(char *) * 2);
	int i = 0;
	char *tok;

	tok = strtok(s, " ");
	while(tok)
	{
		arr[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	return (arr);
}
