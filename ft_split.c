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
	int		in_word;

	word_count = 0;
	i = 0;
	in_word == 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (word_count);
}

char	*fill_word(char const *s, char c)
{

}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = count_word(s, c);
	array = malloc(sizeof(char *) * (word_count + 1));
	if (array == NULL)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		array[i] = fill_word(s, c);
		if (array[i] == NULL)
		{
			free_all(array);
			return (NULL);
		}
		s = ft_strchr(s,c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
