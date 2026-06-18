# Simple Unix Shell in C

A simple Unix shell implemented in C as a project-based learning exercise.

This project was developed to understand the fundamentals of Unix process management, command parsing, and shell design. The implementation follows the core concepts presented in Stephen Brennan's "Write a Shell in C" tutorial while serving as a personal learning project.

## Features

- Interactive command prompt
- Command execution using `fork()` and `execvp()`
- Process synchronization using `waitpid()`
- Built-in commands:
  - `cd`
  - `help`
  - `exit`
- Basic command parsing using whitespace tokenization

## Technologies

- C
- POSIX system calls
- GCC

## Building

```bash
gcc -o shell main.c
