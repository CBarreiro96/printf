# :star2: C - printf :star2:

<p align="center">
  <img src="https://user-images.githubusercontent.com/66263776/88350578-252ffd80-cd19-11ea-9730-7bd7b1da9fca.jpg" width="200" height= "200">
</p>

## :books: Resource :books:
* [Secrets of printf](https://www.cypress.com/file/54761/download "PDF secret of printf").
* [Secrets of printf(): C Programming](https://www.youtube.com/watch?v=Y9kUWsyyChk&t=319s "Video about secret programming")
* [Printf](https://es.wikipedia.org/wiki/Printf "Information about printf")

## Learning Objectives:bulb:
What you should learn from this project:

* Write your own printf function.
* Team work.
* Drawing flowcharts.

## Initial Requirements for the project

  - Allowed editors: vi, vim, emacs
  - All your files will be compiled on Ubuntu 14.04 LTS
  - Your programs and functions will be compiled with gcc 4.8.4 using the flags **-Wall -Werror -Wextra** and **-pedantic**
  - All your files should end with a new line
  - *A README.md* file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions should be included in your header file called **holberton.h**
  - Don’t forget to push your header file
  - All your header files should be include guarded
  - Note that we will not provide the **_putchar** function for this project

## Authorized functions and macros

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`

## Compilation
  -  Your code will be compiled this way:
  ```$ gcc -Wall -Werror -Wextra -pedantic *.c```
  - As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
  - Our main files will include your main header file (`holberton.h`): `#include holberton.h`
  - You might want to look at the `gcc` flag `-Wno-format` when testing with your `_printf` and the standard `printf`.

*******************************************************************************

### Example of test file that can be used:
```
farrukh@ubuntu:~/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
farrukh@ubuntu:~/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
farrukh@ubuntu:~/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
farrukh@ubuntu:~/printf$
```

### Note:
If you like to know more about printf, you can write in your terminal the follow:
> $ man 3 printf.
## :gem: Description of the files contained. :gem:
| File | Description | Flowcharts |
| :---: | :---: | :---: |
| [printf.c](https://github.com/CBarreiro96/printf/blob/master/printf.c "Code printf f") | Contains the principal strcuture of printf | [Printf](https://user-images.githubusercontent.com/66263776/88491603-83531f80-cf69-11ea-8c8f-f752965f7f1b.jpeg "flowcharts") |
| [holberton.h](https://github.com/CBarreiro96/printf/blob/master/holberton.h "Header") | Contains the libraries of proyect and It is define the struct | holberton |
| [function_print_f.c](https://github.com/CBarreiro96/printf/blob/master/function_print_f.c "Function s,c,d,i") | contains the function of type of data as string, char, integer (i,d) | [function](https://user-images.githubusercontent.com/66263776/88588330-fec1d900-d01c-11ea-93ed-bc9481cfcc34.JPG "Function Flowchart") |
|[compare_function](https://github.com/CBarreiro96/printf/blob/master/compare_function.c "Code compare function") | Identify what type of format is the the argument in va_lists | [Compare function](https://user-images.githubusercontent.com/66263776/88580332-12ffd900-d011-11ea-9c47-8059ab1c5ee1.jpg "flowchart compare function")|
|[advance.c](https://github.com/CBarreiro96/printf/blob/master/advance.c "Code Binary and others") | In this file you can find code about convert to integer to binary | [advance](https://user-images.githubusercontent.com/66263776/88580332-12ffd900-d011-11ea-9c47-8059ab1c5ee1.jpg "Folwchar advance")|
| [_putchar.c](https://github.com/CBarreiro96/printf/blob/master/_putchar.c "Printable Tools") | Contains the function to printf byte to byte (**write**) | [putchar.c](https://github.com/CBarreiro96/printf/blob/master/_putchar.c "Printable Tools") |
| [man_3_printf](https://github.com/CBarreiro96/printf/blob/master/man_3_printf "Description") | It contain to description about printf | -- |
## AUTHORS
* Carlos Acero [kbetoacero](https://github.com/kbetoacero "User Github")
* Camilo Barreiro [CBarreiro96](https://github.com/CBarreiro96 "User Github")
