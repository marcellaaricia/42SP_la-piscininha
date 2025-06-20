/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:47:14 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:47:16 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	while (result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	n = 25;
// 	if (ft_sqrt(n) == 0)
// 		printf("Raíz Quadrada de %d = %s\n", n, "Raíz Irracional");
// 	else
// 		printf("Raíz Quadrada de %d = %d\n", n, ft_sqrt(n));
// 	return (0);
// }