/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:15:01 by delina            #+#    #+#             */
/*   Updated: 2023/12/29 22:19:34 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (len--)
		{
			d[i] = s[i];
			i++;
	//		printf("%d", 1);
		}
	}
	else if (dst >= src)
	{
		while (len--)
		{
			d[len] = s[len];
			printf("%d", 1);
		}
	}
	return (dst);
}
#include <stdio.h>
// int main(void)
// {
// 	char src[100] = "I love cats!";
// 	char *dst = src + 2;
// 	ft_memmove(dst, src, 5);
// 	/*char *dst = src + 2;
// 	printf("Src string before the copying: %s\n", src);
// 	printf("Dst string before the copying: %s\n", dst);
// 	ft_memmove(dst, src, 5);
// 	printf("Src string after the copying: %s\n", src);
// 	printf("Dst string after the copying: %s\n", dst);*///
//}
