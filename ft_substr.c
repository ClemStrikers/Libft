/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:48:57 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/13 12:00:23 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int st, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (st >= s_len)
		return (ft_strdup(""));
	if (len > s_len - st)
		len = s_len - st;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + st, len +1);
	return (substr);
}

/*int	main(void)
{
	char	*original = "Bonjour le monde!";
	char	*result;

	// Test 1 : substring normale
	result = ft_substr(original, 8, 2);
	printf("Test 1: '%s'\n", result);
	free(result);
	return (0);
}*/
