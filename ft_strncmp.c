/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:43:29 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 22:08:34 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *string1, const char *string2, size_t count)
{
	while (count && (*string1 || *string2) && (*string1 == *string2))
	{
		string1++;
		string2++;
		count--;
	}
	return (*string1 - *string2);
}
