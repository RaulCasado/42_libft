/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:50:12 by racasado          #+#    #+#             */
/*   Updated: 2024/09/11 12:37:48 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *dest, size_t count)
{
	size_t	i;
	char	*ptr;

	ptr = dest;
	i = 0;
	while (i < count)
	{
		*ptr = 0;
		i++;
		ptr++;
	}
	return (dest);
}
