#include "shell.h"

void (*SHELL_COMMANDS[TOTAL_SHELL_COMMANDS])() = {&CreateDatabase};

void InitShell(){
	int input = -1;

	char* instructions = "\nEdgeDb 2016\n\n"
		" [1] - Create a new Graph Database\n"
		" [2] - Exit"
		"\n\n";
	printf("%s", instructions);

	while (true){
		printf(">> ");
		scanf("%d", &input);
		if (input > 0 && input <= TOTAL_SHELL_COMMANDS){
			(*SHELL_COMMANDS[input - 1])();
			printf("%s", instructions);
		}
		else if (input == TOTAL_SHELL_COMMANDS + 1) break;
		else {
			printf("Invalid command, exiting...\n");
			exit(-1);
		}
		input = -1; // reset
	}

}