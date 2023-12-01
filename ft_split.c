/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 00:56:32 by zlakhdar          #+#    #+#             */
/*   Updated: 2023/12/01 09:50:15 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static void	*ft_free(char **dest)
{
	size_t	i;

	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		dest[i] = NULL;
		i++;
	}
	free(dest);
	dest = NULL;
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	nword;
	int	i;

	i = 0;
	nword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			nword++;
		}
		if (s[i])
			i++;
	}
	return (nword);
}

static void	*put_words(char **dest, const char *s1, char c, size_t nword)
{
	size_t	i;
	size_t	j;
	size_t	the_word;
	size_t	start;

	i = 0;
	j = 0;
	the_word = 0;
	while (i < nword)
	{
		while (s1[j] == c && s1[j])
			j++;
		start = j;
		while (s1[j] != c && s1[j])
		{
			the_word++;
			j++;
		}
		dest[i] = ft_substr(s1, start, the_word);
		if (dest[i] == NULL)
			return (ft_free(dest));
		i++;
		the_word = 0;
	}
	return (0);
}

char	**ft_split(char const *s1, char c)
{
	size_t	nword;
	char	**dest;

	if (!s1 || *s1 == '\0')
	{
		dest = ft_calloc(1, 8);
		return (dest);
	}
	nword = count_words(s1, c);
	if (nword == 0 && s1[0] == c)
	{
		dest = ft_calloc(1, 8);
		return (dest);
	}
	if (nword == 0 || c == 0)
		nword = 1;
	dest = ft_calloc(nword + 1, sizeof(char *));
	if (dest)
		put_words(dest, s1, c, nword);
	return (dest);
}
// int main()
// {
// 	char **sp = ft_split("1 2 3 4 5 6 7 8 9 10 11  12 13 14", 49);
// 	int i =0;
// 	while(sp[i])
// 		printf("%s\n", sp[i++]);
// 	ft_free(sp);
// }