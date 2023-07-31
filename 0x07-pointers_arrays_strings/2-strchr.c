/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to find.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* Found the character, return its address (pointer) */
		}
		s++; /* Move to the next character in the string */
	}

	/* If the character is not found in the string, return NULL */
	return (NULL);
}
