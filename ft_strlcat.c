/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:50:27 by racasado          #+#    #+#             */
/*   Updated: 2024/09/23 13:08:38 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest_len < size && dst[dest_len])
	{
		dest_len++;
	}
	while (src[src_len])
	{
		src_len++;
	}
	while (src[i] && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
	{
		dst[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}
