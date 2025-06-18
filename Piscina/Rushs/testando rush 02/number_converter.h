/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_converter.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:50:15 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/14 17:50:18 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_CONVERTER_H
# define NUMBER_CONVERTER_H

# include "dict_parser.h"
# include <stdlib.h> //malloc, free

// função principa que converte o número em palavras
char	*convert_numb(char *nbr, t_dict *dict);

//quebra número em blocos de 3 dígitos
char	**split_into_triplets(char *nbr);

//converte um bloco de 3 dígitos: "123" > cento e vinte e três
char	*convert_triplet(char *triplet, t_dict *dict);

// adiciona magnitude: mil, milhão e por aí vai
char	*add_magnitude(char *converted, int magnitude_index, t_dict *dict);

//podemos incluir a qualquer momento outras funções auxiliares
//exclusivas do number_converter

#endif