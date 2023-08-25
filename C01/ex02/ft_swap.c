#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int A;
	int B;

	A = 1;
	B = 2;
	ft_swap(&A, &B);
	printf("%d%d", A, B);
}
