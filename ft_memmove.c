/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:19:46 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/14 17:31:31 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*origin;
	unsigned char		*final;

	i = 0;
	origin = (const unsigned char *) src;
	final = (unsigned char *) dest;
	while (i < n)
	{
		temp[i] = origin[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		final[i] = temp[i];
		i++;
	}
	return (dest);
}
