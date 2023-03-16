#ifndef MAIN_H
#define MAIN_H

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
int _strlen(char *s);
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

#endif
