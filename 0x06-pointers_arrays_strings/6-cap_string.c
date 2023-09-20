#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
    int i;
    char sep[] = " \t\n,;.!?\"(){}";

    for (i = 0; s[i] != '\0'; i++)
    {
        int j;

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (i == 0)
            {
                s[i] -= 32;
            }
            else
            {
                for (j = 0; sep[j] != '\0'; j++)
                {
                    if (sep[j] == s[i - 1])
                    {
                        s[i] -= 32;
                        break;
                    }
                }
            }
        }
    }

    return (s);
}

