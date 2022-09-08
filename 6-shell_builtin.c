#include "shell.h"

/**
 * env - set enviroment
 * @command: command entered
 */
void env(char **command __attribute__((unused)))
{
	int i = 0;

	while (environ[i])
	{
		print(environ[i++], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	}
}

/**
 * quit - quit environment
 * @command: command entered
 */
void quit(char **command)
{
	(void) command;
}

/**
 * ch_dir - change directory
 * @command: command entered
 */
void ch_dir(char **command)
{
	(void) command;
}
