/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:46:36 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:46:39 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;
// 	int	power;
// 	nb = 3;
// 	power = 3;
// 	printf("%d^%d = %d\n", nb, power, ft_recursive_power(nb, power));
// 	return (0);
// }