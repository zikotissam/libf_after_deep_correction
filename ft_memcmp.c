/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 03:15:20 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/27 20:56:16 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0 || (!s1 && !s2))
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n - 1 > 0 && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
