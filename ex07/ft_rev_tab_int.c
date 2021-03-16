/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reb_tab_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:17:09 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 11:35:26 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab (int *tab, int size)
{
	int		i;
	int		swapping;

	i = 0;
	while (i < size)
	{
		swapping = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swapping;
		i++;
		size--;
	}
}
