/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-e <falves-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:40:56 by falves-e          #+#    #+#             */
/*   Updated: 2026/04/21 19:29:41 by falves-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = count_word(s, c);
	array = malloc(sizeof(char *) * word_count + 1);
	while (i < word_count)
	{
		*array[i] = fill_word(s);
		if (array[i] == NULL)
		{
			free_all(array);
			return (NULL);
		}
		i++;
	}
	*array[i] = NULL;
	return (array);
}
