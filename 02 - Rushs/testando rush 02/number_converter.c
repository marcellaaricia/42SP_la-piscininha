/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:23:01 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/14 17:23:04 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>
#include "number_converter.h"

// função chamada pela main
// recebe um número como string e um dicionário (t_dict)
// e retorna a string com o número por extenso

char	*convert_number(char *nbr, t_dict *dict)
{
	char	**triplets;
	char	*result;

	//quebra o número em blocos de 3 dígitos (da dir p/ esq)
	triplets = split_into_triplets(nbr);
	if (!triplets)
	{
		return (NULL); // erro de alocação ou input inválido

		//aqui você vai montar a string final
		//usando convert_triplet + add_magnitude
		result = NULL; // depois vamos montar isso direitinho

		//libera os triplets após uso
		// (essa parte iremos fazer com um free_triplets(triplets)
		// mais pra frente)
	
		return (result);
	}

	//dividindo um número em blocos de três dígitos
	//exemplo: "1234567" => ["1", "234", "567"]

	char	**split_into_triplets(char *nbr)
	{
		// Aqui você vai:
		// 1. Calcular o tamanho da string
		// 2. Preencher blocos de 3 da direita pra esquerda
		// 3. Retornar um array de strings (char **)
		// 4. Usar malloc pra alocar o array e cada triplet

		return (NULL);
	}

	//RETORNA 

}