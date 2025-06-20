/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:46:53 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/19 22:46:56 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	int max;
// 	n = 15;
// 	max = n;
// 	n = 1;
// 	while (n <= max)
// 	{
// 		printf("Fibonacci %d: %d\n", n, ft_fibonacci(n));
// 		n++;
// 	}
// 	return (0);
// }