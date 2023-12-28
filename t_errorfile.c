#include "monty.h"

/**
 * t_printerror - function prints the usage error
 */

void t_printerror(void)
{
	fprintf(stderr, "USAGE: monty file\n");
}

/**
 * t_openerror - prints the opening error
 * @fileT: contains the file
 */

void t_openerror(const char *fileT)
{
	fprintf(stderr, "Error: Can't open file %s\n", fileT);
}

/**
 * t_unknowninstruction - prints the opcode error
 * @line_number: line number of the file
 * @opcode: operation code
 */

void t_unknowninstruction(int line_number, char opcode[])
{
	fprintf(stderr, "L%d: Unknown instruction %s\n", line_number, opcode);
}

/**
 * t_pusherror - function prints the push error
 * @line_number: line number of the file
 */
void t_pusherror(int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
}
