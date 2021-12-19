#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 12;
	int b = 3;
	ft_ultimate_div_mod(&a, &b );

	printf("%d \n %d", a, b);
}
