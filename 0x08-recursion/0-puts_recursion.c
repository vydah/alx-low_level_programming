/**
 * _puts_recursion - prints a string
 * @s: pointer to the source string
 * Nothing
 */

void print(char s)
{
	int i = 0;

	if(s[i] !='\0')
		_putchar(s[i]);
}

void _puts_recursion(char s)
{
	print(*s);
}
