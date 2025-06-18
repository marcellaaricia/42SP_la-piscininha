/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:13:49 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 02:13:52 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	validate_args(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
		return (is_valid_number(argv[1]));
	return (is_valid_number(argv[2]));
}

int	get_dict_path(int argc, char **argv, char **dict_path)
{
	if (argc == 2)
		*dict_path = "numbers.dict";
	else
		*dict_path = argv[1];
	return (1);
}

char	*get_number(int argc, char **argv)
{
	if (argc == 2)
		return (argv[1]);
	return (argv[2]);
}

int	print_error(char *message)
{
	write(1, message, ft_strlen(message));
	return (1);
}

int	main(int argc, char **argv)
{
	char	*dict_path;
	char	*number;

	if (!validate_args(argc, argv))
		return (print_error("Error\n"));
	get_dict_path(argc, argv, &dict_path);
	number = get_number(argc, argv);
	if (!process_number(dict_path, number))
		return (print_error("Dict Error\n"));
	return (0);
}
