/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:05:38 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/23 21:44:18 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*str;

	str = (char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str && i < n)
	{
		if (str[i] == (char)c)
			return ((void *)s + i);
		i++;
	}
	if (str[i] == (char)c)
		return ((void *)s + i);
	return (NULL);
}
