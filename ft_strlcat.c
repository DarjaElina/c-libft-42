/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:55:08 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 22:43:32 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] != '\0' && i < dstsize - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	printf("%zu\n", ft_strlen(dest));
	return (dest_len + src_len);
}
/*#include <stdio.h>
int	main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "world";
	printf("My func result: %zu\n", ft_strlcat(s1, s2, 6));
	printf("Original strlcat result: %zu\n", strlcat(s1, s2, 6));
}*/
