/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:29:13 by racasado          #+#    #+#             */
/*   Updated: 2024/09/14 19:32:05 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = strlen(s1) - 1;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	while (j >= i && strchr(set, s1[j]))
		j--;
	ptr = malloc(((j - i + 1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	k = 0;
	while (i <= j)
		ptr[k++] = s1[i++];
	ptr[k] = '\0';
	return (ptr);
}
