/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:24:56 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/15 00:18:05 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	calcule_result(const char *str, int sign)
{
	size_t	result;
	int		i;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		if (result > LONG_MAX)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	int			i;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	return (calcule_result(&nptr[i], sign));
}
