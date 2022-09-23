/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		j++;
		dest[j] = src[i];
		i++;
	}
	return (dest);
}
