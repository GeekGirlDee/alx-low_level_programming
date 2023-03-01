#include <stdio.h>
/**
* Add one line to the code, so that the program prints a[2] = 98,
* followed by a new line
* you can only write one line
* You are not allowed to modify the variable p, or use ',',
* not allowed to code anything expect the line
* Return: value
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/* add the line below */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
