#include <stdio.h>

int main(void)
{
	int b1, b2, i, gcd;

	printf("Enter two integers seperated by space: ");
	scanf("%d%d", &b1, &b2);

	for (i = 1; i <= b1 && i <= b2; ++i)
	{
		if (b1 % i == 0 && b2 % i == 0)
		gcd = i;
	}
	printf("G.C.D of %d and %d is %d", b1, b2, gcd);
	return (0);
}
