#include <stdio.h>

/**
*  You should produce the exact same output as in th example
*  Warnings are allowed
*  Your program should return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long: %lu byte(s)\n", sizeof(li));
	printf("size of a long long %lu byte(s)\n", sizeof(lli));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
