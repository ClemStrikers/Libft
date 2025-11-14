/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:43:52 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/13 11:59:30 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, l1);
	ft_memcpy(str + l1, s2, l2);
	str[l1 + l2] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*res;

// 	s1 = "One sky";
// 	s2 = "one destiny";
// 	res = ft_strjoin(s1, s2);
// 	if (!res)
// 	{
// 		printf("Resultat : %s\n", res);
// 		return (1);
// 	}
// 	printf("Resultat : %s\n", res);
// 	free(res);
// 	return (0);
// }
