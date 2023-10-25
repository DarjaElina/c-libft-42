/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:47:52 by delina            #+#    #+#             */
/*   Updated: 2023/10/23 21:05:45 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	       (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);	
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('1'));
	printf("%d", ft_isalpha('S'));
}
