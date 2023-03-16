#C - argc, argv
---------------------------------
## QUIZ

### Question #0  
What is argc?
```
The number of command line arguments  
AND  
The size of the argv array
```
### Question #1  
What is argv?
```
An array containing the program command line arguments  
AND  
An array of size argc
```
### Question #2  
What is argv[0]
```
The program name
```
### Question #3  
What is argv[argc]?
```
NULL
```
### Question #4  
In the following command, what is argv[2]?
```
$ ./argv My School is fun
```
```
School
```
### Question #5  
In the following command, what is argv[2]?
```
$ ./argv "My School" "is fun"
```
```
is fun
```
### Question #6  
In the following command, what is argv[2]?
```
$ ./argv "My School is fun"
```
```
NULL
```
---------------------------------
## Tasks

### 0. It ain't what they call you, it's what you answer to  
Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program
```
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Affiche le nom du programme
 * @argc: taille du programme
 * @argv: chaine de caractere
 * Return: always 0
 */

int main(int argc, char *argv[])
{
        while (argc--)
                printf("%s\n", *argv++);

        return (0);
}
```
### 1. Silence is argument carried out by other means  
Write a program that prints the number of arguments passed into it.  
* Your program should print a number, followed by a new line
```
#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: taille du programme
 * @argv: chaine de caractere
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
        printf("%d\n", argc - 1);

        return (0);
}
```
### 2. The best argument against democracy is a five-minute conversation with the average voter  
Write a program that prints all arguments it receives.  
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line
```
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Affiche tous les arguments du program
 * @argc: taille du programme
 * @argv: chaine de caractere avec les arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
        int i;

        for (i = 0; i < argc; i++)
        {
                printf("%s\n", argv[i]);
        }

        return (0);
}
```
### 3. Neither irony nor sarcasm is argument  
Write a program that multiplies two numbers.  
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
```
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multipli 2 arguments nombres
 * @argc: taille du programme
 * @argv: chaine de caractere avec les arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
        int mul = 0;

        if (argc == 3)
        {
                mul = atoi(argv[1]) * atoi(argv[2]);
                printf("%d\n", mul);
        }
        else
        {
                printf("Error\n");
                return (1);
        }
        return (0);
}
```
### 4. To infinity and beyond  
Write a program that adds positive numbers.  
* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an int
```
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Addionne des nombres positifs
 * @argc: taille du programme
 * @argv: chaine de caractere avec des nombres
 * Return: always 0
 */

int main(int argc, char *argv[])
{
        int num, digit, sum = 0;

        for (num = 1; num < argc; num++)
        {
                for (digit = 0; argv[num][digit]; digit++)
                {
                        if (argv[num][digit] < '0' || argv[num][digit] > '9')
                        {
                                printf("Error\n");
                                return (1);
                        }
                }

                sum += atoi(argv[num]);
        }

        printf("%d\n", sum);

        return (0);
}
```
