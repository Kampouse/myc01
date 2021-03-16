/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:39:35 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 11:34:36 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_mod(int *x, int *y)
{
	int		temp;

	temp = *x;
	*x = *x / *y;
	*y = temp % *y;
}
