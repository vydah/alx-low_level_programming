/**
 * _puts_recursion - prints a string
 * @s: pointer to the source string
 * Nothing
 */
void _puts_recursion(char *s)
{
	if (*s ! = '\0')
	{
		_putchar(*s);
		s++;
	}
	else
		_putchar('/n');
	_puts_recursion(s);
}