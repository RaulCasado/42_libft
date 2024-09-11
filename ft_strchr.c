/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:35:49 by racasado          #+#    #+#             */
/*   Updated: 2024/09/11 14:13:29 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *string, int c)
{
	while (*string)
	{
		if (*string == c)
		{
			return (string);
		}
		string++;
	}
    if (string == 0)
        return string;
    return 0;
}

int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  ptr = strchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}