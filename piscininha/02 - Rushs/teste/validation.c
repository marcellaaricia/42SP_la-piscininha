/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:25:00 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 02:25:03 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	has_only_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_digit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_empty_or_null(char *str)
{
	if (!str || !str[0])
		return (1);
	return (0);
}

int	starts_with_zero(char *str)
{
	if (str[0] == '0' && str[1])
		return (1);
	return (0);
}

int	is_valid_number(char *str)
{
	if (is_empty_or_null(str))
		return (0);
	if (starts_with_zero(str))
		return (0);
	if (!has_only_digits(str))
		return (0);
	return (1);
}
