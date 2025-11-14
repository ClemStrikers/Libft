/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:51:25 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:51:21 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if ((char)searchedChar == string[i])
		{
			return ((char *)&string[i]);
		}
		i++;
	}
	if ((char)searchedChar == '\0')
	{
		return ((char *)&string[i]);
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Sora";
	int	a = 'S';
    char *res = ft_strchr(str, a);
    if (res)
    {
        printf("%s\n", res);
    }
    else
        printf("NULL\n");
	return (0);
}*/
