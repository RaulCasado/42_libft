/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:35:49 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 22:08:34 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == (char)c)
			return ((char *)string);
		string++;
	}
	if (c == '\0')
		return ((char *)string);
	return (NULL);
}
