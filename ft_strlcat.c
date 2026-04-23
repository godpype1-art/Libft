/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:34:17 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/16 15:11:02 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <bsd/string.h> */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	while (i + len_d + 1 < size)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	if (!(len_d > size))
	{
		dst[len_d + i] = '\0';
		return (len_d + len_s);
	}
	return (size + len_s);
}

/* int main(void)
{
	char dst[] = "hel";
	char *src = "lo";
	size_t	size = 6;
	//size_t result = ft_strlcat(dst, src, size);
	size_t result = strlcat(dst, src, size);
	printf("%zu\n", result);
	return(0);
	
} */