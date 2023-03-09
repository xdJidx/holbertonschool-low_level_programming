# C- Functions; nested loops
---------------------------------
## QUIZ

### Question #0  
Which of these loop statements don’t exist?
```
foreach  
loop_to  
each  
```
### Question #1  
What is the ASCII value of A?
```
65
```
### Question #2  
What is the ASCII value of a?
```
97
```
### Question #3  
What is the ASCII value of J?
```
74
```
### Question #4  
What is the ASCII value of 0?
```
48
```
### Question #5  
What is the ASCII value of -?
```
45
```
### Question #6  
What is the ASCII value of 5?
```
53
```
### Question #7  
What is the result of 12 % 2?
```
0
```
### Question #8  
What is the result of 12 % 3?
```
0
```
### Question #9  
What is the result of 12 % 10?
```
2
```
### Question #10  
What is the result of 89 % 7?
```
5
```
---------------------------------
## Tasks  

### 0. _putchar  
Write a program that prints _putchar, followed by a new line.
```
#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: always 0
 */

int main(void)
{
        putchar('_');
        putchar('p');
        putchar('u');
        putchar('t');
        putchar('c');
        putchar('h');
        putchar('a');
        putchar('r');
        putchar('\n');

        return (0);
}
```
### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game  
Write a function that prints the alphabet, in lowercase, followed by a new line.
```
#include <stdio.h>

/**
 *print_alphabet - sprint alphabet
 *
 */

void print_alphabet(void)
{
        char letter;

        for (letter = 'a' ; letter <= 'z' ; letter++)
        putchar(letter);

        putchar('\n');

}
```
### 2. 10 x alphabet  
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
```
#include <stdio.h>

/**
 *print_alphabet_x10 - sprint alphabet 10 time
 *
 */

void print_alphabet_x10(void)
{
        char letter;
        int i = 0;

        while (i < 10)
        {

        for (letter = 'a' ; letter <= 'z' ; letter++)
        putchar(letter);

        i++;
        putchar('\n');
        }
}
```
### 3. islower  
Write a function that checks for lowercase character.
```
#include <stdio.h>

/**
 * _islower - check is letter is lower
 * @c: is lower
 * Return: 1 or 0
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
```
### 4. isalpha  
Write a function that checks for alphabetic character.
```
#include <stdio.h>

/**
 * _isalpha - check is letter is lower
 * @c: is alpha
 * Return: 1 or 0
 */

int _isalpha(int c)
{
        if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z'))
                return (1);
        else
                return (0);
}
```
### 5. Sign  
Write a function that prints the sign of a number.
```
#include <stdio.h>
#include "main.h"
/**
 * print_sign - check sign of number
 * @n: is sign
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar('0');
                return (0);
        }
        else
        {
                _putchar('-');
                return (-1);
        }
}
```
### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you  
Write a function that computes the absolute value of an integer.
```
#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value
 * @r: is sign
 * Return: -r or r
 */

int _abs(int r)
{
        if (r >= 0)
                return (r);
        else
                return  (-r);
}
```
### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important  
Write a function that prints the last digit of a number.
```
#include "main.h"

/**
 * print_last_digit - check the code
 * @n: is number
 * Return: retourne r
 */

int print_last_digit(int n)
{
        int r;

        r = n % 10;

        if (r < 0)
        r = -r;
        _putchar(r + '0');

        return (r);
}
```
### 8. I'm federal agent Jack Bauer, and today is the longest day of my life  
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
```
#include "main.h"

/**
 * jack_bauer - Décompte de 24h
 *
 *
 */

void jack_bauer(void)
{
        int hour, minute;

        for (hour = 0; hour <= 23; hour++)
        {
                for (minute = 0 ; minute <= 59; minute++)
                {
                        _putchar((hour / 10) + '0');
                        _putchar((hour % 10) + '0');
                        _putchar(':');
                        _putchar((minute / 10) + '0');
                        _putchar((minute % 10) + '0');
                        _putchar('\n');
                }

        }
}
```
### 9. Learn your times table  
Write a function that prints the 9 times table, starting with 0.
```
#include "main.h"

/**
 * times_table - affiche les tables de multiplication de 0-9
 *
 */

void times_table(void)
{
        int x, y, z;

        for (x = 0; x <= 9; x++)
        {
                _putchar('0');

                for (y = 1; y <= 9; y++)
                {
                        _putchar(',');
                        _putchar(' ');

                        z = x * y;

                        if (z <= 9)
                        {
                                _putchar(' ');
                                _putchar(z + '0');
                        }
                else
                {
                        _putchar((z / 10) + '0');
                        _putchar((z % 10) + '0');
                }

                }
                _putchar('\n');
        }
}
```
### 10. a + b  
Write a function that adds two integers and returns the result.
```
#include "main.h"

/**
 * add - do an addition of 2 Number
 * @x: Nombre
 * @y: Nombre
 * Return: return addition
 */

int add(int x, int y)
{
        return (x + y);
}
```
### 11. 98 Battery Street, the OG  
Write a function that prints all natural numbers from n to 98, followed by a new line.
```
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98,
 *
 * @n: number
 */

void print_to_98(int n)
{
        if (n >= 98)
        {
                while (n > 98)
                printf("%d, ", n--);

                printf("%d\n", n);
        }

        else
        {
                while (n < 98)
                printf("%d, ", n++);

                printf("%d\n", n);
        }
}
```
