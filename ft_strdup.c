/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:58:13 by racasado          #+#    #+#             */
/*   Updated: 2024/09/12 14:04:23 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *string)
{
    char *ptr;
    int i;

    i = 0;
    ptr = malloc(ft_strlen(string) + 1);
    if (!ptr)
        return NULL;
    while (string[i])
    {
        ptr[i] = string[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}