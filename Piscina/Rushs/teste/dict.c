/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:23:49 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 03:23:52 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*create_dict_node(char *key, char *value)
{
	t_dict	*node;

	node = malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->key = ft_strdup(key);
	node->value = ft_strdup(value);
	node->next = NULL;
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}
	return (node);
}

char	*get_dict_value(t_dict *dict, char *key)
{
	while (dict)
	{
		if (ft_strcmp(dict->key, key) == 0)
			return (dict->value);
		dict = dict->next;
	}
	return (NULL);
}

void	free_dictionary(t_dict *dict)
{
	t_dict	*temp;

	while (dict)
	{
		temp = dict;
		dict = dict->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
