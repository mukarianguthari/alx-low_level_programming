#include <stdio.h>
#include <string.h>

/**
 * splitstring - split a string into tokens using strtok
 * @str - pointer to the string to bre tokenized
 * @delims - string containing all delimiters
 *
 * Return - pointer to the first token encountered in the string, NULL if no more stokens are found
 */

int main()
{
	char str[] = "Geeks-for-Geeks";

	/*Returns first token*/
	char* token =  strtok(str, "-");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}

	return 0;
}

