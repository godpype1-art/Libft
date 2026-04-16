/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:05:38 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/16 17:19:21 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (const char *)s;
	i = 0;
	while (str && i < n)
	{
		if (str[i] == c)
			return (str);
		i++;
	}
	if (str[i] == c)
		return (str);
	return (NULL);
}
