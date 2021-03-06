/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_cap_D.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 18:55:59 by mkamel            #+#    #+#             */
/*   Updated: 2018/03/03 14:46:01 by mkamel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

char			*ft_flag_cap_d(va_list *ap, t_data *arg)
{
	intmax_t	nb;
	char		*nbr;

	nb = va_arg(*ap, intmax_t);
	nbr = ft_itoa_base((long int)nb, 10);
	if (arg->p_field && arg->precision == 0 && nb == 0)
		*nbr = '\0';
	arg->length_f = ft_strlen(nbr);
	return (nbr);
}
