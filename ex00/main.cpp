#include "Scaler.hpp"

int main(int ac, char **av)
{
	(void)ac;
	ScalarConverter tst;
	tst.convert(av[1]);
	return 0;
}