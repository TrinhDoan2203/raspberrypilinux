#include <stdio.h>
int sum(int a, int b);
void Greeting();
int main()
{
	Greeting();
	printf("\nSum of %d and %d is %d\n",2,3,sum(2,3));
	return 0;
}
