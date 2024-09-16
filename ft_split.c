/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:31:12 by racasado          #+#    #+#             */
/*   Updated: 2024/09/16 14:40:00 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *ptr, char delimiter)
{
	int	total_words;
	int	i;

	i = 0;
	total_words = 0;
	while (ptr[i])
	{
		if (ptr[i] != delimiter)
		{
			total_words++;
			while (ptr[i] != delimiter && ptr[i])
				i++;
		}
		else
		{
			i++;
		}
	}
	return (total_words);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!lst || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			lst[i] = ft_substr(s, 0, word_len);
			s += word_len;
			i++;
		}
		else
			s++;
	}
	return (lst);
}
