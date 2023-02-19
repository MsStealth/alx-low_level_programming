#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints the alphabet in lowercase and starts a new line
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
