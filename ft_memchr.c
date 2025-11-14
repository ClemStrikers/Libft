/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:07:27 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/10 13:57:09 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *m, int c, size_t s)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)m;
	while (i < s)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "One sky, one destiny";
    printf("%s", (char *)ft_memchr(str, 'y', 21));
    return (0);
}*/
