/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:32:52 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/19 23:42:42 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				indx;
	unsigned char		*p;

	p = (unsigned char *)s;
	indx = 0;
	while (n > indx)
	{
		if (p[indx] == (unsigned char)c)
			return (p + indx);
		indx++;
	}
	return (0);
}
