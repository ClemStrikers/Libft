/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:44:15 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/14 11:11:21 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		is_word;

	if (!s)
		return (0);
	count = 0;
	is_word = 0;
	while (*s != '\0')
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*s == c)
		{
			is_word = 0;
		}
		s++;
	}
	return (count);
}

char	*get_word(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	if (!s)
		return (0);
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_all(char **arr, int n)
{
	while (n--)
		free(arr[n]);
	free(arr);
}

const char	*skip_delim(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < count)
	{
		s = skip_delim(s, c);
		res[i] = get_word(s, c);
		if (!res[i])
			return (free_all(res, i), NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}
