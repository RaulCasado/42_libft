/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:39:26 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 13:57:17 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t number, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < number * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
