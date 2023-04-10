#include <unistd.h>
/**
 * _putchar - puts char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
