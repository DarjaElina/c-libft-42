/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:41:30 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 15:59:04 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_get_len(int n)
{
	int	len;

	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	else
		len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		str_len;
	int		sign;
	char	*res_str;

	str_len = ft_get_len(n);
	if (ft_is_negative(n))
	{
		sign = 1;
		n = -n;
	}
	sign = 0;
	res_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (!res_str)
		return (NULL);
	res_str[str_len] = '\0';
	while (str_len > 0)
	{
		str_len--;
		res_str[str_len] = n % 10 + 48;
		n = n / 10;
	}
	if (sign == 1)
		res_str[0] = '-';
	return (res_str);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(17));
	printf("%s\n", ft_itoa(-17));
	printf("%s\n", ft_itoa(0));
}*/
