/**
 * _isupper - prints if the characters are lowercase or not
 * 0 for lowercase 1 for uppercase
 * @l: the character to be checked
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int l)
{
	if ('A' <= l && l <= 'Z')
		return 1;
	else
		return 0;
}
