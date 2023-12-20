/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:55:08 by delina            #+#    #+#             */
/*   Updated: 2023/11/10 23:17:18 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	if (dest == NULL && dstsize == 0)
		return (0);
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] != '\0' && i < dstsize - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	//char s1[100] = "Hello";
	char s2[100] = "world";
	printf("My func result: %zu\n", ft_strlcat(s1, s2, 6));
	printf("Original strlcat result: %zu\n", strlcat(s1, s2, 6));
	char b[0xF] = "nyan !";
	ft_strlcat(((void *)0), b, 2);
}*/
