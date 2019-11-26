/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:04:03 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/26 10:52:39 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	int		ret;

	ret = 0;
	while (*(s++))
	{
		if (*s && *s != c)
		{
			ret++;
			while (*s && *s != c)
				s++;
		}
	}
	return (ret);
}

static int		ft_wordlen(char const *word, char c)
{
	int	wordlen;

	wordlen = 0;
	while (*word == c)
		word++;
	while (*word != c && *word)
	{
		word++;
		wordlen++;
	}
	return (wordlen);
}

static char		**ft_free(char **ret, int i)
{
	while (i)
		free(ret[i--]);
	free(ret);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	int		words;
	int		i[2];
	int		it;

	words = ft_words(s, c);
	if (!s || !(ret = (char**)malloc((words + 1) * sizeof(char*))))
		return (NULL);
	it = 0;
	i[0] = -1;
	while (++i[0] < words)
	{
		if (!(ret[i[0]] = (char*)malloc(ft_wordlen(&s[it], c) + 1)))
		{
			return (ft_free(ret, i[0]));
		}
		while (s[it] == c)
			it++;
		i[1] = 0;
		while (s[it] != c && s[it])
			ret[i[0]][i[1]++] = s[it++];
		ret[i[0]][i[1]] = '\0';
	}
	ret[i[0]] = NULL;
	return (ret);
}
