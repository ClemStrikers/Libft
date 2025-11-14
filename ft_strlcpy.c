/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:46:32 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 11:10:35 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*int main(void)
{
    char str1[] = "HI";
    char str2[] = "World";
    ft_strlcpy(str2, str1, 2);
    printf("%s, %s\n", str1, str2);
    return (0);
}*/