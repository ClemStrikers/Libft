/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:44:05 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/13 12:00:10 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*t;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	t = (char *)malloc(end - start + 1);
	if (!t)
		return (NULL);
	ft_strlcpy(t, s1 + start, end - start + 1);
	t[end - start] = '\0';
	return (t);
}

/*int	main(void)
{
	char	*s;
	char	*set;
	char	*res;

	s = "+++Destiny Island---+++";
	set = "+-";
	res = ft_strtrim(s, set);
	if (!res)
		return (1);
	printf("Avant : %s\n", s);
	printf("Apres : %s\n", set);
	free(res);
	return (0);
}*/