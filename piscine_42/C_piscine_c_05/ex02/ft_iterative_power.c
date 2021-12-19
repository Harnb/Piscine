/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:20:46 by rlachau           #+#    #+#             */
/*   Updated: 2021/09/27 15:11:06 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = nb;
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	while (power > 1)
	{
		nb *= c;
		power--;
	}
	return (nb);
}
