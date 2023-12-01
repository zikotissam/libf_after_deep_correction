/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 04:44:15 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/19 22:40:45 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_lenght;
	char	*ptr;

	str_lenght = ft_strlen(str);
	ptr = malloc(str_lenght + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, str_lenght + 1);
	return (ptr);
}
