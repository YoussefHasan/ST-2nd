#include "func.h"
extern int main(int argc, char *argv[]);
int result = 0;
int const multiplier = 2;
int multiply(int number)
{
	result = number * multiplier;
	return result;

}
