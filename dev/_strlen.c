/**
 * _strlen - find string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
        int m;

        m = 0;
        while (s[m] != '\0')
        {
                m++;
        }
        return (m);
}
