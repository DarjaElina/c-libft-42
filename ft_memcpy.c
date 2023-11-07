/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:10:00 by delina            #+#    #+#             */
/*   Updated: 2023/11/04 22:32:06 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dst && ! src)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
int main(void)
{
	// not overlapping strings
	char s1[10] = "Hello";
	char s2[10] = "World";

	printf("Before: %s\n", s1);
	ft_memcpy(s1, s2, 3);
	printf("After: %s\n", s1);

	// overlappings strings

	char src[100] = "I love cats!";
    	char *dst = src + 2;
    	printf("Src string before the copying: %s\n", src);
    	printf("Dst string before the copying: %s\n", dst);
    	ft_memcpy(dst, src, 5);
    	printf("Src string after the copying: %s\n", src);
    	printf("Dst string after the copying: %s\n", dst);
}*/
