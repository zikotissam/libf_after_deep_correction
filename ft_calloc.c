/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:23:20 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/27 19:04:55 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	totale;
	char	*ptr;

	ptr = NULL;
	if (size > 0 && nitems > 0)
	{
		totale = nitems * size;
		if (totale / nitems != size)
			return (NULL);
		ptr = malloc(totale);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, totale);
	}
	else if (size == 0 || nitems == 0)
	{
		ptr = malloc(1);
		ptr[0] = 0;
		return ((void *)ptr);
	}	
	return ((void *)ptr);
}
