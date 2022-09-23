/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char concat;
	int i = 0;
	int j =0;

	while (dest[i] != '\0')
	{
		concat[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		concat[i] = src[j];
		j++;
	}
	dest = concat;
	return (dest);
}