#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
    return (0);
}
