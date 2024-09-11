/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racasado <racasado@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:50:26 by racasado          #+#    #+#             */
/*   Updated: 2024/09/10 13:53:21 by racasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int str)
{
	if (!((str >= 65 && str <= 90) || (str >= 97 && str <= 122)))
	{
		return (0);
	}
	return (1024);
}

static int	ft_isdigit(int str)
{
	if (!(str >= '0' && str <= '9'))
	{
		return (0);
	}
	return (1024);
}

int	ft_isalnum(int str)
{
	if (ft_isdigit(str) || ft_isalpha(str))
		return (1024);
	return (0);
}
