/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:34:30 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 14:23:55 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *first, int *second)
{
	int		middle;

	middle = *first;
	*first = *second;
	*second = middle;
}
