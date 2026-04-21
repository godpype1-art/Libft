/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:49:29 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/21 18:37:21 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int main(void)
 {
	char c = '9';
	const char str[] = "   -2147483648";
	size_t	n = 7;
	size_t	y = 71;
	int		x = 58;

	printf("ft_atoi = %d\n", ft_atoi(str));
	ft_bzero((char *)str, n);
	ft_calloc(n, y);
	printf("ft_isalnum = %d\n", ft_isalnum(c));
	printf("ft_isalpha = %d\n", ft_isalpha(c));
	printf("ft_isascii = %d\n", ft_isascii(x));
	printf("ft_isdigit = %d\n", ft_isdigit(c));
	printf("ft_isprint = %d\n", ft_isprint(c));
	
	return(0);
 }
 