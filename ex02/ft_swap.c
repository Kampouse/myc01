/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:34:30 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 11:34:08 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *first, int *second)
{
	int		middle;
	int		middleb;

	middle = *first;
	middleb = *second;
	*first = middleb;
	*second = middle;
}
