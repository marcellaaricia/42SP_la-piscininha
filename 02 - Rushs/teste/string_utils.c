/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:41:11 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 03:41:16 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	count_digits(int num)
{
	int	count;

	if (num == 0)
		return (1);
	count = 0;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*int_to_string(int num)
{
	char	*str;
	int		len;
	int		i;

	len = count_digits(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (str);
}

int	is_number_zero(char *str)
{
	return (ft_strcmp(str, "0") == 0);
}

int	get_string_length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_simple_number(char *str)
{
	int	len;

	len = get_string_length(str);
	return (len <= 2);
}
