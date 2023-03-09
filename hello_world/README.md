# C - Hello, World
---------------------------------
## QUIZ

Question #0  
In which category belongs the C programming language?
```
Compiled language
```
Question #1  
What is the common extension for a C source file?
```
.c
```
Question #2  
What is the common extension for a C header file?
```
.h
```
Question #3  
Which command can be used to compile a C source file?
```
gcc
```
Question #4  
Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?
```
/* Comment */  
AND  
/*
 * Comment
 */
```
Question #5  
What are the different steps to form an executable file from C source code
```
Preprocessing, compilation, assembly, and linking
```
---------------------------------
## Tasks

0. Preprocessor  
Write a script that runs a C file through the preprocessor and save the result into another file.
```
#!/bin/bash
gcc -E $CFILE -o c
```
1. Compiler  
Write a script that compiles a C file but does not link.
```
#!/bin/bash
gcc -c $CFILE
```
2. Assembler  
Write a script that generates the assembly code of a C code and save it in an output file.
```
#!/bin/bash
gcc -S $CFILE
```
3. Name  
Write a script that compiles a C file and creates an executable named cisfun.
```
#!/bin/bash
gcc $CFILE -o cisfun
```
4. Hello, puts  
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
```
#include <stdio.h>

/**
* main - Print
*
* Return: always = 0
*/

int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
```
5. Hello, printf  
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
```
#include <stdio.h>

/**
 * main - printf affiche le texte
 *
 * Return: always 0
 *
 */

int main(void)
{
printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
```
6. Size is not grandeur, and territory does not make a nation  
Write a C program that prints the size of various types on the computer it is compiled and run on.
```
#include <stdio.h>

/**
 *main - fonction principale
 *
 *sizeof - Donne la quantité de stockage en octets.
 *
 *Return: always 0
 *
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(int long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(int long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
```
