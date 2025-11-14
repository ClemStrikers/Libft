/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:26:19 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:52:11 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 0 || c > 255)
	{
		return (c);
	}
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
	{
		c = c -32;
	}
	return (c);
}

/*int	main(void)
{
	int	a = 'a';
	printf("%c\n", ft_toupper(a));
	return (0);
}*/
