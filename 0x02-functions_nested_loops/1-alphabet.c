#include "main.h"

	/**
	 * main - Entry point
	 *
	 * print_alphabet - print all alphabet in lowercase
	 * description for print alphaber
	 *
	 * Return: Always 0(success)
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
