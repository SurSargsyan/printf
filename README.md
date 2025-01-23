<div id="header" align="center">
  <img src="https://media.giphy.com/media/QXJd9XVrgJuDFhhcOX/giphy.gif" width="200"/>
</div>

<h1 align="center">School 42 printf()</h1>

This repository contains all files for the __printf__ project from School 42 Málaga cursus. The project consist in duplicate the [`printf()`](https://es.wikipedia.org/wiki/Printf) function, part of the `stdio.h` library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About
This project consists in duplicate the behavior of the C function `printf()`. It is not necessary to implement the buffer management of the original function. It must handle the following parameters:

- `char` type variables.
- `string` type variables.
- `int` type variables.
- `unsigned int` type variables.
- hexadecimal `int` type variables (uppercase and lowercase).
- `pointer` type variables.

You will find more details in the [subject of the project](https://github.com/PublioElio/School-42-printf/blob/main/printf.es.subject.pdf).

## Index
- [Structure](#structure)
- [Formats](#formats)
	- [va_list](#va_list)
	- [Returning an integer](#returning-an-integer)
- [Auxiliary functions](#auxiliary-functions)

### Structure
The main obstacles during the execution of the project have been: handling a variable number of parameters and the function `ft_printf()` returning an `int`.

#### `va_list`
To deal with the variable number of parameters entered, the macros `va_list`, `va_start`, `va_arg` and `va_end` have been used. The `ft_printf()` function calls the `ft_fotmat()` function when it finds the `%` sign among the entered parameters, then it checks the next character in the string to call one of the functions that print the different variable types. To use this macro, the libraryt `<stdarg.h>` is included in the `ft_printf.h`.

#### Returning an integer
To handle the integer returned by `ft_printf()`, a pointer is given in the format printing functions. In this way, the function handles the number of characters printed before continuing with the string sent by parameter. Example:

```
void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++; // increasing the pointer with each character printed
}
```
### Formats
The different types of variables are printed using a function for each of the formats:

* [__`ft_putchar_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putchar_pf.c) prints `char` type variables and is called by each of the following functions to print the character strings one by one. Also, it is where the pointer returned by the `ft_printf()` function is incremented.
* [__`ft_puthex_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_puthex_pf.c) prints hexadecimal integers,  using a string included in the `ft_printf.h` library. There is one string for uppercase and one for lowercase characters.
* [__`ft_putnbr_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putnbr_pf.c) recursively prints an integer, handling the maximum negative value with a conditional (`if-else`) and casting the integer to characters.
* [__`ft_putptr_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putptr_pf.c) prints a pointer, in hexadecimal format (lowercase), preceded by the string "0x".
* [__`ft_putstr_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putstr_pf.c) prints a `char *` type variable, calling `ft_putchar_pf()` in a `while` loop. It the string is `NULL`, it returns `"(null)"`.
* [__`ft_putuint_pf()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_putuint_pf.c) prints an `unsigned int` type variable.

### Auxiliary functions
[__`ft_aux_pf.c()`__](https://github.com/PublioElio/School-42-printf/blob/main/ft_aux_pf.c) this file contains all the auxiliary functions, specifically the `ft_atoi_base` function, [made during the August pool](https://github.com/PublioElio/School42-Piscina-agosto-2022). This function will be used mainly to change the base in functions that handle hexadecimal numbers and `unsigned int` type variables.

## Requirements
The functions are written in __C language__ and need the `gcc` compiler, with `<stdlib.h>`, `<stdarg.h>` and `<unistd.h>` standard libraries to run.

## Instructions

### 1. Compiling the archives

To compile the proiect, go to its path and run:

For __mandatory__ functions:
```
$ make
```
### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use this project in your code, simply include this header:
```
#include "ft_printf.h"
```

## Testing
This function have been tested with [Francinette](https://github.com/xicodomingues/francinette).

# Author ✍🏼

<table>
  <tr>
    <td align="center"><a href="[https://github.com/SurSargsyan/](https://profile.intra.42.fr/users/susargsy)"><img src="https://github.com/user-attachments/assets/10784ded-47b7-48bd-afb0-97907cdd652b" width="100px;" alt="100px"/><br /><sub><b>SurSargsyan</b></sub></a><br /><a href="https://profile.intra.42.fr/users/susargsy title="Intra 42"><img src="https://img.shields.io/badge/Malaga-FFFFFF?style=plastic&logo=42&logoColor=000000" alt="Intra 42"/></a></td>
  </tr>
</table>

# Contact 📥

◦ Email: sargsyansuren11@gmail.com

◦ Linkedin: https://www.linkedin.com/in/suren-sargsyan-25582a27a/

# You Might Be Interested!

### - To see mt progression in the 42 common core ↙️

[HERE](https://github.com/SurSargsyan?tab=repositories)

### - My profile on the intranet ↙️
[HERE](https://profile.intra.42.fr/users/susargsy)
