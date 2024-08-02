/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:26:12 by delina            #+#    #+#             */
/*   Updated: 2023/12/29 19:27:49 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (destsize == 0)
		return (src_len);
	while (i < destsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < destsize)
		dest[i] = '\0';
	return (src_len);
}
/*#include <stdio.h>
int	main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "Hello world";
	printf("%zu", ft_strlcpy(s1, s2, 5));
}*/
