#include "main.h"
/**
 * finder- finds the right function for opcode
 * @opcode: instructions from monty
 * @line_number: line number where opcode occurs
 * @av: array of opcode instruction
 * Return: nothing
 */
void finder(int line_number, char **av)
{
	int i = 0;
	stack_t *head = NULL;
	instruction_t list_funcs[] = {
		{"push", f_push},
		{"pall", f_pall},
		{NULL, NULL}
	};

	while(list_funcs[i].opcode != NULL)
	{
		if(list_funcs[i].opcode == av[0] && av[0] != "pall")
		{
			list_funcs[i].f(&head, atoi(av[1]));
		}
		else if(av[0] == "pall")
		{
			f_pall(&head);
		}
		else
		{
			printf("L%d: unknown instruction %s\n", line_number, av[0]);
		}
	}
		
}
