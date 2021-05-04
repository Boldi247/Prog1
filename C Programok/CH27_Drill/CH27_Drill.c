#include <stdlib.h>
#include <stdio.h>

void print_values (const char* p, const int x)
{
	printf("p is \"%s\" and x is %i\n", p, x);
}

int main()
{
	printf("Hello World!\n");
	
	char* hello = "Hello";
	char* world = "World!";

	printf("%s %s\n", hello, world);

	print_values("foo", 7);

	return 0;
}