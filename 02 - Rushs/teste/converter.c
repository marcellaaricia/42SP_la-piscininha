/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:06:54 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 03:06:57 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_result(char *result)
{
	if (result)
	{
		write(1, result, ft_strlen(result));
		write(1, "\n", 1);
	}
}

int	convert_and_print(t_dict *dict, char *number)
{
	char	*result;

	result = get_dict_value(dict, number);
	if (!result)
		return (0);
	print_result(result);
	return (1);
}

int	process_number(char *dict_path, char *number)
{
	t_dict	*dict;
	int		success;

	dict = load_dictionary(dict_path);
	if (!dict)
		return (0);
	success = convert_and_print(dict, number);
	free_dictionary(dict);
	return (success);
}
