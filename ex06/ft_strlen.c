/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:56:14 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 14:13:51 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
int	ft_strlen(char *str)
{
	int		lenght;
	char	*string_ln;

	string_ln = str;
	lenght = 0;
	while (*string_ln != 0)
	{
		lenght++;
		string_ln++;
	}	
	return (lenght);
}
