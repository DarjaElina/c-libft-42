/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:57:59 by delina            #+#    #+#             */
/*   Updated: 2023/10/24 13:09:22 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>


void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;
	unsigned char *str;
	
	str = destination;

	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	str[n] = '\0';
	return (destination);
}

#include <stdio.h>
int	main(void)
{
	char str[10] = "Hello";
	printf("Before: %s\n", str);
	ft_memset(str, '1', 7);
	printf("After: %s", str);
}
