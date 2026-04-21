/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:30:59 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/21 16:31:35 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_lil;
	size_t	i;

	len_lil = ft_strlen(little);
	if (len_lil == 0)
		return ((char *)big);
	i = 0;
	while (big && i < len && big[i] != '\0')
	{
		if (big[i] == little[i])
			if (ft_strncmp(big, little, len_lil) == 0)
				return ((char *)big);
		i++;
	}
	return (NULL);
}
