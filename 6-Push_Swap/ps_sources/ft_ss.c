/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamel <mkamel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:47:45 by mkamel            #+#    #+#             */
/*   Updated: 2018/05/10 16:00:54 by mkamel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void			ft_ss(t_dllist *a, t_dllist *b, int i)
{
	ft_sa(a, b, 0);
	ft_sb(a, b, 0);
	i == 2 ? ft_printf("{yel} {und}ss{eoc}\n") : 0;
	i == 1 ? ft_printf("ss\n") : 0;
	a->moves--;
}
