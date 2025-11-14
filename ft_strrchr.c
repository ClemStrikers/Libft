/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:03:17 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:51:57 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		i;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if ((char)c == s[i])
			last = ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last);
}
/*int	main(void)
{
	const char	*str = "Sora";
	int	a = ' ';
    char *res = ft_strrchr(str, a);
    if (res)
    {
        printf("%s\n", res);
    }
    else
        printf("NULL\n");
	return (0);
}*/