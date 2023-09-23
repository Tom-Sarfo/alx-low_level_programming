/**
  *print_msg - prints the message before main function
  *Return: nothing
  */
#include"lists.h"
void print_msg(void) __attribute__((constructor));
void print_msg(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
