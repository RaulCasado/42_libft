/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:55:31 by racasado          #+#    #+#             */
/*   Updated: 2024/09/13 10:11:11 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char		*dest_2;
	const char	*src_2;

	if (!dest && !src)
	{
		return (NULL);
	}
	dest_2 = dest;
	src_2 = src;
	while (count)
	{
		*dest_2 = *src_2;
		count--;
		dest_2++;
		src_2++;
	}
	return (dest);
}
