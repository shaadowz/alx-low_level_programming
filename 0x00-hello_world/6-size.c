#include <stdio.h>
/**
 * main - A program to print the size of various types on the cpmputer
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(char));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(int));
printf("Size of long: %lu bytes\n", (unsigned long)sizeof(long));
printf("Size of long long: %lu bytes\n", (unsigned long)sizeof(long long));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(float));
return (0);
}
