/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:08:41 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:51:49 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	if (!*little)
		return ((char *)big);
	a = 0;
	while (big[a] && a < len)
	{
		b = 0;
		while (big[a + b] == little[b] && (a + b) < len)
		{
			if (!little[b + 1])
				return ((char *)&big[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s", ft_strnstr("One sky, one destiny", "blue", 20));
	return (0);
}*/