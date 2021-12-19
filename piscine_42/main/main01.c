#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a = 56;
	int *py1 = &a;
	int **py2 = &py1;
	int ***py3 = &py2;
	int ****py4 = &py3;
	int *****py5 = &py4;
	int ******py6 = &py5;
	int *******py7 = &py6;
	int ********py8 = &py7;
	int *********py9 = &py8;
	printf("%d \n", *********py9);
	ft_ultimate_ft(py9);
	printf("%d \n", *********py9); 
}
