/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:41:09 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 12:50:20 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*string1;
	char	*string2;

	string1 = s1;
	string2 = s2;
	while (n && (*string1 || *string2) && (*string1 == *string2))
	{
		string1++;
		string2++;
		n--;
	}
	return (*string1 - *string2);
}
