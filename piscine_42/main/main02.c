void	ft_swap(int *a, int	*b);

#include <stdio.h>

int main(void)
{
    int z = 2;
    int y = 4;
    int *a;
    int *b;
    a = &z;
    b = &y;
    printf("%d %d", *a, *b);
    ft_swap(a, b);
    printf("%d, %d", *a, *b);
}
