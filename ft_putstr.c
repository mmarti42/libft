/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:48:25 by mmarti            #+#    #+#             */
/*   Updated: 2019/04/05 17:48:27 by mmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s1)
{
	if (!s1)
		return ;
	while (*s1 != '\0')
	{
		ft_putchar(*s1);
		s1++;
	}
}
