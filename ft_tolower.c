/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:46:38 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:52:06 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 0 || c > 255)
	{
		return (c);
	}
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
	{
		c = c +32;
	}
	return (c);
}

/*int	main(void)
{
	int	a = 's';
	printf("%c\n", ft_tolower(a));
	return (0);
}*/