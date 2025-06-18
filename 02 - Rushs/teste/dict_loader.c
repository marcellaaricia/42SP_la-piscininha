/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_loader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:24:34 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 04:07:35 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_colon(char *line)
{
	while (*line && *line != ':')
		line++;
	if (*line != ':')
		return (NULL);
	return (line);
}

t_dict	*add_to_dict(t_dict *dict, char *key, char *value)
{
	t_dict	*new_node;

	new_node = create_dict_node(key, value);
	if (!new_node)
		return (dict);
	new_node->next = dict;
	return (new_node);
}

t_dict	*process_single_line(char *line, t_dict *dict)
{
	char	*colon;
	char	*key;
	char	*value;

	if (!line || !*line || *line == '\n')
		return (dict);
	colon = find_colon(line);
	if (!colon)
		return (dict);
	*colon = '\0';
	key = ft_strtrim(line);
	value = ft_strtrim(colon + 1);
	if (key && value)
		dict = add_to_dict(dict, key, value);
	if (key)
		free(key);
	if (value)
		free(value);
	return (dict);
}

t_dict	*load_dictionary(char *dict_path)
{
	char	*content;
	char	*line_start;
	char	*line_end;
	t_dict	*dict;

	content = read_file(dict_path);
	if (!content)
		return (NULL);
	dict = NULL;
	line_start = content;
	while (*line_start)
	{
		line_end = line_start;
		while (*line_end && *line_end != '\n')
			line_end++;
		if (*line_end == '\n')
			*line_end = '\0';
		dict = process_single_line(line_start, dict);
		if (*line_end == '\0')
			break ;
		line_start = line_end + 1;
	}
	free(content);
	return (dict);
}
