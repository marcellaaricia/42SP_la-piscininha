/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:44:12 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 03:44:15 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_scale_word(t_dict *dict, int scale)
{
	if (scale == 3)
		return (get_dict_value(dict, "1000"));
	if (scale == 6)
		return (get_dict_value(dict, "1000000"));
	if (scale == 9)
		return (get_dict_value(dict, "1000000000"));
	return (NULL);
}

int	convert_chunk(t_dict *dict, char *chunk)
{
	int	num;

	num = string_to_int(chunk);
	if (num == 0)
		return (1);
	return (convert_hundreds(dict, num));
}

int	process_chunk(t_dict *dict, char *chunk, int scale)
{
	char	*scale_word;

	if (!convert_chunk(dict, chunk))
		return (0);
	if (scale > 0)
	{
		scale_word = get_scale_word(dict, scale);
		if (!scale_word)
			return (0);
		write(1, " ", 1);
		write(1, scale_word, ft_strlen(scale_word));
	}
	return (1);
}

int	split_number(char *number, char chunks[][4])
{
	int	len;
	int	chunk_count;
	int	i;
	int	j;
	int	start;

	len = ft_strlen(number);
	chunk_count = (len + 2) / 3;
	i = 0;
	while (i < chunk_count)
	{
		start = len - (i + 1) * 3;
		if (start < 0)
			start = 0;
		j = 0;
		while (j < 3 && start + j < len)
		{
			chunks[i][j] = number[start + j];
			j++;
		}
		chunks[i][j] = '\0';
		i++;
	}
	return (chunk_count);
}

int	convert_big_number(t_dict *dict, char *number)
{
	char	chunks[10][4];
	int		chunk_count;
	int		i;
	int		first;

	chunk_count = split_number(number, chunks);
	first = 1;
	i = chunk_count - 1;
	while (i >= 0)
	{
		if (string_to_int(chunks[i]) > 0)
		{
			if (!first)
				write(1, " ", 1);
			if (!process_chunk(dict, chunks[i], i * 3))
				return (0);
			first = 0;
		}
		i--;
	}
	return (1);
}
