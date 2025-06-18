/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:22:54 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 02:22:58 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	char	*dict_path;
	char	*number;
	t_dict	*dict;
	int		result;

	if (argc < 2 || argc > 3)
		return (ft_error("Error\n"));
	if (argc == 2)
	{
		dict_path = "numbers.dict";
		number = argv[1];
	}
	else
	{
		dict_path = argv[1];
		number = argv[2];
	}
	if (!ft_is_valid_number(number))
		return (ft_error("Error\n"));
	dict = ft_parse_dict(dict_path);
	if (!dict)
		return (ft_error("Dict Error\n"));
	result = ft_convert_number(number, dict);
	ft_free_dict(dict);
	return (result);
}

int	ft_error(char *message)
{
	ft_putstr(message);
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
