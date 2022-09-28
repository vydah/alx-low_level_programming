/**
 * _puts_recursion - prints a string
 * @s: pointer to the source string
 * Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}