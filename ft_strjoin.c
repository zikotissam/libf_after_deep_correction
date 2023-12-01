/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:16:37 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/11/27 20:52:33 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenght_s1;
	size_t	lenght_s2;
	char	*dest;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	lenght_s1 = ft_strlen(s1);
	lenght_s2 = ft_strlen(s2);
	dest = malloc(lenght_s1 + lenght_s2 + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, lenght_s1 + 1);
	ft_strlcpy(dest + lenght_s1, s2, lenght_s2 + 1);
	return (dest);
}
