#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	printf("godme daemon process.\n");

	int pid;
	pid = fork();
	if (pid > 0) exit(0);

	setsid();

	while(1) { }

	return 0;
}
