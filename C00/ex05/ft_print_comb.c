/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:33:52 by falves-e          #+#    #+#             */
/*   Updated: 2026/01/29 15:33:58 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func_while(int a, int b, int c)
{
	char	arry[3];

	arry[0] = '0' + a;
	arry[1] = '0' + b;
	arry[2] = '0' + c;
	write (1, arry, 3);
	if (a != 7 || b != 8 || c != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	arry[3];

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				func_while(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	return ;
}

/*void main ()
{
	ft_print_comb();
	return ;
}*/
