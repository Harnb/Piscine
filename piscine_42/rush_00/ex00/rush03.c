/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:22:06 by rlachau           #+#    #+#             */
/*   Updated: 2021/09/12 16:17:47 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_firstandlastlines(int max_x);
void	ft_middlelines(int max_x, int max_y);

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_firstandlastlines(x);
		ft_middlelines(x, y);
		if (y > 1)
		{
			ft_firstandlastlines(x);
		}
	}
}

void	ft_firstandlastlines(int max_x)
{
	int	cpt;

	cpt = 0;
	ft_putchar('A');
	while (cpt < (max_x - 2))
	{
		ft_putchar('B');
		cpt++;
	}
	if (max_x >= 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_middlelines(int max_x, int max_y)
{
	int	cpt_c;
	int	cpt_l;

	cpt_l = 0;
	while (cpt_l < (max_y - 2))
	{
		ft_putchar('B');
		cpt_c = 0;
		while (cpt_c < (max_x - 2))
		{
			ft_putchar(' ');
			cpt_c++;
		}
		if (max_x >= 2)
			ft_putchar('B');
		ft_putchar('\n');
		cpt_l++;
	}
}
