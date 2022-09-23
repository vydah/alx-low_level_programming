/**
 * _strncpy - copies the string in src into dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: the length of the string src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
