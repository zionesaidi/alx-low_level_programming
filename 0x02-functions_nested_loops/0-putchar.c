#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints -putchae, followed by a new line
 * Return: 0
 */
int main(void)
{
		char putchar[] = "-putchar";
	
		int msg;
				for (msg = 0; msg <= 8; msg++)
						{
									_putchar(-putchar[msg]);
										}
					_putchar('\n');
						return (0);
}
