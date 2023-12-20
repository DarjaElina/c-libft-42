/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:41:30 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 18:21:21 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res_str;
	long int		nbr;
	unsigned int	sign;
	int				str_len;

	nbr = n;
	str_len = ft_get_len(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	res_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (!res_str)
		return (NULL);
	res_str[str_len] = '\0';
	while (str_len--)
	{
		res_str[str_len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	if (sign == 1)
		res_str[0] = '-';
	return (res_str);
}
/*#include <stdio.h>
int	main(void)
{	
	printf("%s\n", ft_itoa(-2147483648));
	//printf("%s\n", ft_itoa(-623));
	//printf("%s\n", ft_itoa(-17));
	//printf("%s\n", ft_itoa(0));
}*/
