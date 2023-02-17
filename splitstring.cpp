

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Me10ssi";


	char *token = strtok(str, "0");


	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}

	return 0;
}

