#include <string.h>

void color(char pick[7]){

	if (strcmp(pick, "red")==0)
	{
		printf("\033[0;31m");

	} else if (strcmp(pick, "green")==0)
	{
		printf("\033[0;32m");

	}  else if (strcmp(pick, "yellow")==0)
	{
		printf("\033[0;33m");

	}  else if (strcmp(pick, "blue")==0)
	{
		printf("\033[0;34m");

	}  else if (strcmp(pick, "purple")==0)
	{
		printf("\033[0;35m");

	}  else if (strcmp(pick, "cyan")==0)
	{
		printf("\033[0;36m");

	}  else if (strcmp(pick, "grey")==0)
	{
		printf("\033[0;37m");

	}  else if (strcmp(pick, "reset")==0)
	{
		printf("\033[0m");

	} else
	{	color("red");
		printf("\nError: This color is not available\n");
	}
}