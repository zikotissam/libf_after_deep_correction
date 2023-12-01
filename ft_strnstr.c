/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:57:16 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/27 18:03:22 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t range)
{
	size_t	i;
	size_t	check;
	size_t	to_find_lenght;

	i = 0;
	if (!str && !range)
		return (NULL);
	if (!*to_find)
		return ((char *)str);
	to_find_lenght = ft_strlen(to_find);
	while (str[i] && to_find_lenght <= range - i)
	{
		check = 0;
		while (str[i + check] == to_find[check] && to_find[check])
			check++;
		if (to_find[check] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
