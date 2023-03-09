# C - Variables, if, else, while
---------------------------------
## QUIZ

### Question #0  
What is the size of the unsigned int data type?
```
4 bytes
```
### Question #1  
What is the size of the char data type?
```
1 byte
```
### Question #2  
What is the size of the float data type?
```
4 bytes
```
### Question #3  
Which of the following are valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)
```
if (a > b)
{
  return (a);
}
AND
if (a > b)
  return (a);
```
### Question #4  
Which of the following are valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)
```
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
AND
for (a = 0; a < b; a++)
    printf("%d\n", a);
AND
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```
### Question #5  
Which of the following are valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)
```
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
AND
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);
AND
a = 0;
while (a < b)
    printf("%d\n", a++);
```
---------------------------------
## Tasks

### 0. Positive anything is better than negative nothing  
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - si positif ou négatif ou nul
 *
 *Return: alaways 0
 *
 * betty style doc for function main goes there
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
        /* Si supérieur à zero*/
        printf("%d is positive\n", n);
        }
        else if (n < 0)
        {
        /* si inférieur à zero*/
        printf("%d is negative\n", n);
        }
        else
        {
        /* Sinon affiche zero*/
        printf("%d is zero\n", n);
        }

        return (0);
}
```
### 1. The last digit  
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
        char letter;

        for (letter = 'a' ; letter <= 'z' ; letter++)
                putchar(letter);
        putchar('\n');

        return (0);
}
```
### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game  
Write a program that prints the alphabet in lowercase, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
        char letter;

        for (letter = 'a' ; letter <= 'z' ; letter++)
                putchar(letter);
        putchar('\n');

        return (0);
}
```
### 3. alphABET  
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and upper
 *
 * Return: Always 0.
 */

int main(void)
{
        char letter;

        for (letter = 'a' ; letter <= 'z' ; letter++)
        putchar(letter);

        for (letter = 'A' ; letter <= 'Z' ; letter++)
        putchar(letter);

        putchar('\n');

        retun (0);
}
```
### 4. When I was having that alphabet soup, I never thought that it would pay off  
Write a program that prints the alphabet in lowercase, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without e and q
 *
 * Return: Always 0.
 */

int main(void)
{
        char letter;

        for (letter = 'a' ; letter <= 'z' ; letter++)
        {
                if (letter != 'e' && letter != 'q')
                putchar(letter);
        }

        putchar('\n');

        return (0);
}
```
### 5. Numbers  
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints numbers 0-9
 *
 * Return: Always 0.
 */

int main(void)
{
        int num;

        for (num = 0 ; num < 10 ; num++)
                printf("%d", num);

        printf("\n");

        return (0);
}
```
### 6. Numberz  
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints numberz 0-9
 *
 * Return: Always 0.
 */

int main(void)
{
        int num;

        for (num = 0 ; num < 10 ; num++)
                putchar((num % 10) + '0');

        putchar('\n');

        return (0);
}
```
### 7. Smile in the mirror  
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
        char letter;

        for (letter = 'z' ; letter >= 'a' ; letter--)
                putchar(letter);
        putchar('\n');

        return (0);
}
```
### 8. Hexadecimal  
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
```
#include <stdio.h>

/**
 * main - Prints hexadecimal 0-9 and a-f
 *
 * Return: Always 0.
 */

int main(void)
{
        int num;

        for (num = 0 ; num < 10 ; num++)
                putchar((num % 10) + '0');
        for (num = 'a' ; num <= 'f' ; num++)
                putchar(num);

        putchar('\n');

        return (0);
}
```
### 9. Patience, persistence and perspiration make an unbeatable combination for success  
Write a program that prints all possible combinations of single-digit numbers.
```
#include <stdio.h>

/**
 * main - Prints 0-9 with ,
 *
 * Return: Always 0.
 */

int main(void)
{
        int num;

        for (num = 0 ; num < 10 ; num++)
        {
                putchar((num % 10) + '0');
                if (num == 9)
                        continue;

                putchar(',');
                putchar(' ');
        }
        putchar('\n');

        return (0);
}
```
