/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:05:09 by racasado          #+#    #+#             */
/*   Updated: 2024/09/13 13:15:14 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	const char	*last;

	last = NULL;
	while (*string)
	{
		if (*string == (char)c)
			last = string;
		string++;
	}
	if (*string == (char)c)
		return ((char *)string);
	return ((char *)last);
}
