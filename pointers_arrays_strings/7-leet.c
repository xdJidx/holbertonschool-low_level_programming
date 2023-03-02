#include "main.h"

/**
 * *leet - Change les lettre a,e,o,t et l en
 * 4,3,0,7 et 1.
 * @str: string
 * Return: String
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			    str[index1] + 32 == leet[index2])
				str[index1] = index2 + '0';
		}

		index1++;
	}

	return (str);
}
