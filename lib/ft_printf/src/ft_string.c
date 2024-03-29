/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:44:19 by fnascime          #+#    #+#             */
/*   Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_len(char c, int *len)
{
	ft_putchar_fd(c, 1);
	(*len)++;
}

void	ft_putstr_len(char *str, int *len)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		*len += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar_len(*str, len);
		str++;
	}
}
