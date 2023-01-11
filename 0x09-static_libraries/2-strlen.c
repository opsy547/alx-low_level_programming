/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the strings
 * Return: Return void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
