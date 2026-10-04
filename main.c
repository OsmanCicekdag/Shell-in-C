#include <stdio.h>

void shell_loop(void);

int main(int argc, char **argv)
{
	shell_loop();
	
	return EXIT_SUCCESS;
}

void shell_loop(void){
	char *line;
	char **args;
	int status;

	do {
		printf("> ");
		line = shell_read_line;
		args = shell_split_line(line);
		status = shell_execute(args);

		free(line);
		free(args);
	} while (status);
}
