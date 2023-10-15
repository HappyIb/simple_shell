#include "shellth.h"
/**
 *
 */
int main(int argc, char**argv)
{
	
f (argc < 2) {
    printf("Usage: %s <command> <arguments>\n", argv[0]);
    exit(1);
  }

  // Create a new process to execute the command.
 	pid_t pid = fork();
 	if (pid == 0) {
  	// Child process.
 	execvp(argv[1], argv + 1);

 	// If execvp fails, print an error message and exit.
 	perror("execvp");
 	exit(1);
	}
	else if (pid > 0)
	{
 	// Parent process.
	wait(NULL);
        }
	else
	{
	// Fork failed.
	perror("fork");
	exit(1);
	}
	return(0);
}
