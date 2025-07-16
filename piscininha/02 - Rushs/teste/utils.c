/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:51:38 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 02:51:41 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t');
}

char	*ft_strtrim(char *str)
{
	char	*start;
	char	*end;
	char	*trimmed;
	int		len;
	int		i;

	start = str;
	while (is_whitespace(*start))
		start++;
	end = start + ft_strlen(start) - 1;
	while (end > start && is_whitespace(*end))
		end--;
	len = end - start + 1;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = start[i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
