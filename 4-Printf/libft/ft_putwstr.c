/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 16:09:51 by mkamel            #+#    #+#             */
/*   Updated: 2018/01/31 19:07:47 by mkamel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr(const wchar_t *wcstr)
{
	char	*str;

	str = ft_wstr_to_str(wcstr);
	ft_putstr(str);
}
