/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:05:09 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 11:45:37 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *string, int c)
{
	const char	*last;

	last = NULL;
	while (*string)
	{
		if (*string == c)
			last = string;
		string++;
	}
	if (*string == '\0')
		return (*string);
	return (last);
}
