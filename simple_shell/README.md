# _SIMPLE SHELL_

****
## Table Of Contents

 - **What is "the Shell"?**
 - **Project Description**
 - **GCC command to compile**
 - **List of allowed functions and system calls**
 - **Authors**
****

## What is "the Shell"?

the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux.

## Project Description

This project is a simple version of the linux shell. It is created using the C programming Language and it can do many functionalities that a real shell does.

## GCC command to compile:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
This wil compile all the '.c' files and change the output's name to 'hsh'.

****
## List of allowed functions and system calls

| # | Allowed Functions | System Calls |
|---|--------------------|-------------|
| 1 | access | man 2 access |
| 2 | chdir | man 2 chdir |
| 3 | close | man 2 close |
| 4 | closedir | man 3 closedir |
| 5 | execve | man 2 execve |
| 6 | exit | man 3 exit |
| 7 | _exit | man 2 _exit |
| 8 | fflush | man 3 fflush |
| 9 | fork | man 2 fork |
| 10 | free | man 3 free |
| 11 | getcwd | man 3 getcwd |
| 12 | getline | man 3 getline |
| 13 | getpid | man 2 getpid |
| 14 | isatty | man 3 isatty |
| 15 | kill | man 2 kill |
| 16 | malloc | man 3 malloc |
| 17 | open | man 2 open |
| 18 | opendir | man 3 opendir |
| 19 | perror | man 3 perror |
| 20 | read | man 2 read |
| 21 | readdir | man 3 readdir |
| 22 | signal | man 2 signal |
| 23 | stat (__xstat) | man 2 stat |
| 24 | lstat (__lxstat) | man 2 lstat |
| 25 | fstat (__fxstat) | man 2 fstat |
| 26 | strtok | man 3 strtok |
| 27 | wait | man 2 wait |
| 28 | waitpid | man 2 waitpid |
| 29 | wait3 | man 2 wait3 |
| 30 | wait4 | man 2 wait4 |
| 31 | write | man 2 write |
****

## Authors
Angie Aldana, Daniel Novoa.
