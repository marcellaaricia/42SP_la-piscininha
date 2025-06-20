/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:45:32 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:45:34 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while ((nb - 1) > 0)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	n = 5;
// 	printf("%d! = %d\n", n, ft_iterative_factorial(n));
// 	return (0);
// }