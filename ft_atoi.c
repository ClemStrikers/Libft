/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clempaol <clempaol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:40:45 by clempaol          #+#    #+#             */
/*   Updated: 2025/11/08 10:49:23 by clempaol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char	*s1)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (is_space(*s1))
		s1++;
	if (*s1 == '+' || *s1 == '-')
	{
		if (*s1 == '-')
			sign = -1;
		s1++;
	}
	while (is_digit(*s1))
	{
		result = result * 10 + (*s1 - '0');
		s1++;
	}
	return (result * sign);
}
/*int	main(void)
{
	char	*tests[] = {
		"42",
		"   123",
		"\t\n  -56",
		"+789",
		"   +0042abc",
		"---12",
		"",
		"  + 12",
		NULL
	};
	int		i;

	i = 0;
	while (tests[i])
	{
		printf("Input: \"%s\"\n", tests[i]);
		printf("ft_atoi: %d\n", ft_atoi(tests[i]));
		printf("atoi:    %d\n\n", atoi(tests[i]));
		i++;
	}
	return (0);
}*/
