/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:07:09 by delina            #+#    #+#             */
/*   Updated: 2023/11/04 19:22:07 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", ft_isdigit('/'));
}*/
