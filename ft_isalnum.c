/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:11:28 by delina            #+#    #+#             */
/*   Updated: 2023/10/23 21:17:34 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int	c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <=122 ))
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalnum('1'));
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('/'));
}
