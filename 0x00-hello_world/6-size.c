#include<stdio.h>
/**
 * main- serves as entry point for the program
 *
 * return:by default returns '0'if no errors otherwise returns non-zero value
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
