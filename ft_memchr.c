/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:15:49 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 12:49:49 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
