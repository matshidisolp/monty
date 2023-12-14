#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - Monty code interpreter
 * @argc: number of arguments
 * @argv: Monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	FILE *file = fopen(argv[1], "r");

	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	char *content = NULL;
	size_t size = 0;
	ssize_t read_line;

	stack_t *stack = NULL;
	unsigned int counter = 0;

	while ((read_line = getline(&content, &size, file)) > 0)
	{
		bus.content = content;
		counter++;
		execute(content, &stack, counter, file);
	}

	free(content);
	free_stack(stack);
	fclose(file);

	return (0);
}
