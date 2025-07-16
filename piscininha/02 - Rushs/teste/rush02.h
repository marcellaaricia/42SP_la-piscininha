/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 02:53:45 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/15 02:53:48 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}	t_dict;

/* Main functions */
int		process_number(char *dict_path, char *number);
int		is_valid_number(char *str);

/* Dictionary functions */
t_dict	*load_dictionary(char *dict_path);
char	*get_dict_value(t_dict *dict, char *key);
void	free_dictionary(t_dict *dict);
t_dict	*create_dict_node(char *key, char *value);

/* Dictionary loader functions */
char	*find_colon(char *line);
t_dict	*add_to_dict(t_dict *dict, char *key, char *value);
t_dict	*process_single_line(char *line, t_dict *dict);

/* String utilities */
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strtrim(char *str);

/* File operations */
char	*read_file(char *filename);
int		get_file_size(char *filename);

/* Number conversion */
int		convert_and_print(t_dict *dict, char *number);
void	print_result(char *result);
int		convert_units(t_dict *dict, int num);
int		convert_tens(t_dict *dict, int num);
int		convert_hundreds(t_dict *dict, int num);

/* Big number conversion */
int		convert_big_number(t_dict *dict, char *number);
int		split_number(char *number, char chunks[][4]);
int		process_chunk(t_dict *dict, char *chunk, int scale);
char	*get_scale_word(t_dict *dict, int scale);
int		convert_chunk(t_dict *dict, char *chunk);
int		string_to_int(char *str);
char	*int_to_string(int num);
int		count_digits(int num);
int		is_number_zero(char *str);
int		is_simple_number(char *str);

/* Big number conversion */
int		convert_big_number(t_dict *dict, char *number);
int		split_number(char *number, char chunks[][4]);
int		process_chunk(t_dict *dict, char *chunk, int scale);
char	*get_scale_word(t_dict *dict, int scale);
int		convert_chunk(t_dict *dict, char *chunk);

#endif