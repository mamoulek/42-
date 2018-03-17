/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb_tables.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:57:11 by mkamel            #+#    #+#             */
/*   Updated: 2017/11/22 16:57:16 by mkamel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nb_tables(int *tab, size_t i)
{
	size_t	y;

	y = 0;
	while (y < i)
	{
		ft_putnbr(tab[y]);
		ft_putchar('\n');
		y++;
	}
}