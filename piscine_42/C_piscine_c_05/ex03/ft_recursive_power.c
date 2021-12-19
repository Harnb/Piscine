/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlachau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:51:30 by rlachau           #+#    #+#             */
/*   Updated: 2021/09/28 00:24:59 by rlachau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
