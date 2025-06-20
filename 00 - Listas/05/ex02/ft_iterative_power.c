/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:46:19 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:46:21 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power >= 1)
	{
		p = p * nb;
		power--;
	}
	return (p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;
// 	int	power;
// 	nb = -3;
// 	power = 3;
// 	printf("%d^%d = %d\n", nb, power, ft_iterative_power(nb, power));
// 	return (0);
// }