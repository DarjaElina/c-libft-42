/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:55:08 by delina            #+#    #+#             */
/*   Updated: 2023/10/28 18:24:58 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t	ft_strlen(const char* c);
size_t	ft_strlcat(char *dest, const char* src, size_t dstsize)
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
	return (dest_len + src_len);
}

#include <stdio.h>
int	main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "worlddddddd";
	printf("%zu", ft_strlcat(s1, s2, 0));
	printf("%zu", ft_strlcat(s1, s2, 16));
}       
