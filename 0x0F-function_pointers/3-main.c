#include "function_pointers.h"

int main(int argc, char *argv[])
{
	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
