/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 03:06:20 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/19 22:51:47 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t	i ;

	if (!ptr && n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = (unsigned char) x;
		i++;
	}
	return (ptr);
}
