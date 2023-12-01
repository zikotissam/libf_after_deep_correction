/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 03:01:35 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/27 20:53:20 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_first_index(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (set[j] != str[i] && set[j] != '\0')
		{
			j++;
		}
		if (set[j] == '\0')
			return (i);
		j = 0;
		i++;
	}
	return (i);
}

static size_t	find_last_index(char const *str, char const *set, size_t lenght)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (i < lenght)
	{
		while (set[j] != str[lenght - 1 - i] && set[j] != '\0')
		{
			j++;
		}
		if (set[j] == '\0')
			return (lenght - i);
		j = 0;
		i++;
	}
	return (lenght - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenght_s1;
	size_t	first_i;
	size_t	last_i;
	char	*dest;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	lenght_s1 = ft_strlen(s1);
	first_i = find_first_index(s1, set);
	if (first_i == lenght_s1)
		return (dest = ft_strdup(""));
	else
	{
		last_i = find_last_index(s1, set, lenght_s1);
		dest = malloc(last_i - first_i + 1);
		ft_strlcpy(dest, s1 + first_i, last_i - first_i + 1);
	}
	return (dest);
}
