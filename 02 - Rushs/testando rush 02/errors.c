/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:42:15 by lsarraci          #+#    #+#             */
/*   Updated: 2025/06/14 17:52:38 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	errorcheck(char *ch)
{
	int	i;

	i = 0;
	if (ch[i] == '\0')
		write(1, "Error", 5);
	else
		ch = "23";
}

void	if_negative(char *ch)
{
	write(1, "Error", 5);
}
