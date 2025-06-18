/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:39:48 by lsarraci          #+#    #+#             */
/*   Updated: 2025/06/14 17:47:08 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 1024
# define MAX_DICT_ENTRIES 100

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

// main.c
int		main(int ac, char **av);

// dict_parser.c
t_dict	*parse_dictionary(char *dict_path);
int		validate_key_exists(t_dict *dict, char *key);
void	free_dictionary(t_dict *dict);

// number_converter.c
char	*convert_number(char *number_str, t_dict *dict);
int		is_valid_number(char *str);

// string_utils.c
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strtrim(char *str);
long long	ft_atoll(char *str);

// error_handler.c
void	print_error(void);
void	print_dict_error(void);
int		ft_putstr(char *str);

#endif