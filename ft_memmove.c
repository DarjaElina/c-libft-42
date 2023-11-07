/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:15:01 by delina            #+#    #+#             */
/*   Updated: 2023/11/04 22:45:36 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
/*#include <stdio.h>
int main(void)
{
	char src[100] = "I love cats!";
	char *dst = src + 2;
	printf("Src string before the copying: %s\n", src);
	printf("Dst string before the copying: %s\n", dst);
	ft_memmove(dst, src, 5);
	printf("Src string after the copying: %s\n", src);
	printf("Dst string after the copying: %s\n", dst);
}*/
