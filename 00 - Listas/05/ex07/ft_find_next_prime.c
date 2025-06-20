/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:47:57 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:47:59 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else
	{
		i = 3;
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i = i + 2;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!(ft_is_prime(nb)))
		{
			nb = nb + 1;
		}
		return (nb);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	n = 4534;
// 	printf("O Primo mais próximo de %d é %d\n", n, ft_find_next_prime(n));
// 	return (0);
// }