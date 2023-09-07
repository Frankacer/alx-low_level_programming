#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
void print_binary(unsigned long int n);
ssize_t read_textfile(const char *filename, size_t letters);
unsigned int _atoi(const char *s);
float _pow(float base, int index);
int *rev_arr(int *num, int length);
void swap_num(int *n1, int *n2);
int _printf(const char *format, ...);
int _putchar(char c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int i);
int print_last_digit(int c);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
int multiple(int m, int n);
unsigned int _strlen(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int is_prime_helper(int n, int i);
int is_palindrome(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary_helper(unsigned long int n, unsigned int *i);

#endif

