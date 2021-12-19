#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int a = 24;
	int *nbr;
	printf("%d \n", a);
	nbr = &a;
	ft_ft(nbr);
	printf("%d", *nbr);
}
