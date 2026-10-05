#include <stdio.h>

void shell_loop(void);

int main(int argc, char **argv)
{
	shell_loop();
	
	return EXIT_SUCCESS;
}

#define LSH_RL_BUFSIZE 1024

char *shell_read_line(void){
	int bufsize = SHELL_RL_BUFSIZE;
	int position = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer){
	fprintf(stderr, "shell allocation error\n");
	exit(EXIT_FAILURE);
	} 

	while(true){

		//loop for reading line

	}
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
