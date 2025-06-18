/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marde-je <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:33:56 by marde-je          #+#    #+#             */
/*   Updated: 2025/06/10 23:33:59 by marde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}

int	main(void)
{
	char	*p = "hello";
	int	len;
	char	output;

	printf("\n\n==========================\n");
	printf("String: %s\n", p);

	len = ft_strlen(p);
	output = len + '0';
	printf("==========================\n");
	printf("Val da String: %s\n", &output);
	printf("==========================\n\n\n");

	return (0);
}
