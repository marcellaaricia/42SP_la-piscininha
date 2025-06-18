/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 03:25:25 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 03:25:28 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_file_size(char *filename)
{
	int		fd;
	int		size;
	char	buffer[1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	size = 0;
	while (read(fd, buffer, 1) > 0)
		size++;
	close(fd);
	return (size);
}

char	*allocate_file_buffer(int size)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	return (buffer);
}

int	read_file_content(char *filename, char *buffer, int size)
{
	int	fd;
	int	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, size);
	close(fd);
	if (bytes_read != size)
		return (0);
	buffer[size] = '\0';
	return (1);
}

char	*read_file(char *filename)
{
	int		size;
	char	*buffer;

	size = get_file_size(filename);
	if (size == -1)
		return (NULL);
	buffer = allocate_file_buffer(size);
	if (!buffer)
		return (NULL);
	if (!read_file_content(filename, buffer, size))
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
