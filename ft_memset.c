/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:03:32 by racasado          #+#    #+#             */
/*   Updated: 2024/09/11 11:48:48 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;
	char	*ptr;

	ptr = dest;
	i = 0;
	while (i < count)
	{
		*ptr = c;
		i++;
		ptr++;
	}
	return (dest);
}
