/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:35:49 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 00:18:55 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == c)
			return (string);
		string++;
	}
	if (c == '\0')
		return (string);
	return (NULL);
}
