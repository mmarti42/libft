/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 22:12:35 by mmarti            #+#    #+#             */
/*   Updated: 2019/08/10 22:12:36 by mmarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(char *s, char c)
{
	size_t count;

	count = 0;
	if (!s)
		return (count);
	while (*s && *s != c)
	{
		s++;
		count++;
	}
	return (count);
}
